#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QLabel>
#include <QDebug>
#include <QMouseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ButtonOpen_clicked();
    void on_TextXY_linkActivated(const QString &link);

    void on_Picture_linkActivated(const QString &link);

    void on_pushButton_clicked();

    void on_actionExit_triggered();

    void on_actionOpen_triggered();

private:
    Ui::MainWindow *ui;
    void mousePressEvent(QMouseEvent*);
};

#endif // MAINWINDOW_H
