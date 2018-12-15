#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <cmath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    spawnButtons(this->geometry().width(), this->geometry().height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::spawnButtons(int sizeWindowX, int sizeWindowY)
{
    buttons.clear();

    int const countButtonInLine = 5;
    int const withButton = sizeWindowX / countButtonInLine;
    int const hithButton = sizeWindowY / countButtonInLine;

    for (int i = 0; i <= sizeWindowX; i += withButton)
    {
        for (int j = 0; j <= sizeWindowY; j += hithButton)
        {
            QPushButton *NB = new QPushButton(this);
            NB->setGeometry(i, j, withButton, hithButton);
            NB->show();
            buttons.push_back(NB);
        }
    }
}

void MainWindow::resizeEvent(QResizeEvent*)
{
  spawnButtons(this->geometry().width(), this->geometry().height());
}
