import random
import time
import ctypes

# Code de la touche Pause sur Windows
VK_PAUSE = 0x13

# Fonction pour simuler l'appui sur la touche Pause
def press_pause_key():
    # Simuler l'appui sur la touche Pause
    # Utiliser la bibliothèque ctypes pour simuler l'appui sur une touche du clavier
    ctypes.windll.user32.keybd_event(VK_PAUSE, 0, 0, 0)
    ctypes.windll.user32.keybd_event(VK_PAUSE, 0, 2, 0)

# Boucle principale du programme
while True:
    # Générer un délai aléatoire entre 30 et 120 secondes
    random_delay = random.randint(30, 120)

    # Boucle pour chaque seconde du délai
    for i in range(random_delay):
        # Afficher le temps restant sur la sortie standard
        print(f"Temps restant : {random_delay - i} secondes")

        # Attendre une seconde
        time.sleep(1)

    # Appeler la fonction pour simuler l'appui sur la touche Pause
    press_pause_key()

    # Afficher un message de log
    print("Touche Pause appuyée !")
