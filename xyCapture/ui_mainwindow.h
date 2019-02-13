/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionOpen;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *Features;
    QLabel *TextXY;
    QPushButton *ButtonOpen;
    QPushButton *pushButton;
    QLabel *Picture;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1247, 704);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/gui/icone/gui/icone/Button-Delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/gui/icone/gui/icone/Index.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        Features = new QLabel(centralWidget);
        Features->setObjectName(QStringLiteral("Features"));
        Features->setFrameShape(QFrame::Box);
        Features->setFrameShadow(QFrame::Raised);
        Features->setAlignment(Qt::AlignCenter);
        Features->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(Features, 2, 0, 1, 1);

        TextXY = new QLabel(centralWidget);
        TextXY->setObjectName(QStringLiteral("TextXY"));
        TextXY->setFrameShape(QFrame::Box);
        TextXY->setFrameShadow(QFrame::Raised);
        TextXY->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        TextXY->setWordWrap(false);
        TextXY->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(TextXY, 0, 2, 1, 1);

        ButtonOpen = new QPushButton(centralWidget);
        ButtonOpen->setObjectName(QStringLiteral("ButtonOpen"));

        gridLayout_2->addWidget(ButtonOpen, 2, 1, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 2, 1, 1);

        Picture = new QLabel(centralWidget);
        Picture->setObjectName(QStringLiteral("Picture"));
        Picture->setCursor(QCursor(Qt::CrossCursor));
        Picture->setFrameShape(QFrame::Box);
        Picture->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(Picture, 0, 0, 1, 2);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1247, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "xyCapture by omega", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Exit</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "Esc", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        Features->setText(QApplication::translate("MainWindow", "Features", Q_NULLPTR));
        TextXY->setText(QString());
        ButtonOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        Picture->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
