import glob
import json
import os
import os.path as osp
import shutil

import PIL.Image
import cv2
import labelme
import numpy as np

# global vars
DATA_DIR = "LABELME"
OUT_DIR = "output"

# get labels for get id
class_names = []
class_name_to_id = {}
for i, line in enumerate(open("labels.txt").readlines()):
    print(line)
    class_id = i
    print(class_id)
    class_name = line.strip()
    class_name_to_id[class_name] = class_id
    if class_id == -1:
        assert class_name == '__ignore__'
        continue

# create output directory
if os.path.isdir(OUT_DIR):
    shutil.rmtree(OUT_DIR)
os.makedirs(OUT_DIR)

# iter in all polygon
for label_file in sorted(glob.glob(osp.join(DATA_DIR, '*.json'))):
    print(label_file)
    with open(label_file) as f:
        # get all data from labelme json
        base = osp.splitext(osp.basename(label_file))[0]
        data = json.load(f)
        img_file = osp.join(osp.dirname(label_file), data['imagePath'])
        img = np.asarray(PIL.Image.open(img_file))
        lbl = labelme.utils.shapes_to_label(
            img_shape=img.shape,
            shapes=data['shapes'],
            label_name_to_value=class_name_to_id,
        )

        if len(data["shapes"]) > 0:
            for i, polygon in enumerate(data["shapes"]):
                print("i: {}".format(i))
                if polygon["label"] == "slideband":
                    # get en draw polygon
                    print(polygon)
                    pts = np.array(polygon["points"])
                    mask = np.zeros((1488, 1024), dtype=np.uint8)
                    points = np.array([polygon["points"]])
                    cv2.fillPoly(mask, points, (255))
                    res = cv2.bitwise_and(img, img, mask)
                    rect = cv2.boundingRect(points)  # returns (x,y,w,h) of the rect
                    cropped = res[rect[1]: rect[1] + rect[3], rect[0]: rect[0] + rect[2]]

                    # show
                    cv2.imshow("cropped", cropped)
                    cv2.waitKey(100)

                    # write cropped file to output
                    cv2.imwrite(osp.join(OUT_DIR, str(i) + '.png'), cropped)
cv2.destroyAllWindows()
print("End of file, done.")
