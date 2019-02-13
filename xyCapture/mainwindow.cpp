#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->TextXY->setFixedWidth(75);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ButtonOpen_clicked()
{
    /* Open file */
    QFileDialog dialog(this);
      dialog.setNameFilter(tr("Images (*.png *.xpm *.jpg *.jpeg)"));
      dialog.setViewMode(QFileDialog::Detail);
      QString fileName = QFileDialog::getOpenFileName(this, tr("Open Images"), "", tr("Image Files (*.png *.jpg *.bmp *.jpeg)"));
      if (!fileName.isEmpty()) {
          QImage image(fileName);

          int w = image.width();
          int h = image.height();
          ui->Picture->setMaximumWidth(w);
          ui->Picture->setMaximumHeight(h);
          //ui->Picture->setMinimumHeight(1280);
          //ui->Picture->setMinimumWidth(720);
          ui->Picture->setPixmap(QPixmap::fromImage(image));

          QString msg;
          msg.append("Size: " + QString::number(w) + " * " + QString::number(h));
          ui->Features->setText(msg);

          ui->TextXY->clear();
      }
}

void MainWindow::on_TextXY_linkActivated(const QString &link)
{

}

void MainWindow::on_Picture_linkActivated(const QString &link)
{

}

void MainWindow::on_pushButton_clicked()
{
    ui->TextXY->clear();
}

void MainWindow::mousePressEvent(QMouseEvent* event)
{
    int x = event->x() - ui->Picture->x();
    int y = event->y() - ui->Picture->y();

    QString text = ui->TextXY->text() + " " + QString::number(x) + ";" + QString::number(y) + "\r\n";
    ui->TextXY->setText(text);

}



void MainWindow::on_actionExit_triggered()
{
    close();
}

void MainWindow::on_actionOpen_triggered()
{
    MainWindow::on_ButtonOpen_clicked();
}
