#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "content.h"
#include <QKeyEvent>
#include <QString>

enum posRestrictions { //Possible restrictions. May be edited, but the changes must be handled correctly.
    NONE,
    BOAT,
    FLYING,
    HUMAN_ONLY
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initGame();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initGame() {
    ui->cmbSecond->setVisible(false);
    ui->cmbThird->setVisible(false);
    ui->cmbFourth->setVisible(false);
}

void MainWindow::setOutput(QString text) {
    ui->txbrOutput->setText(text);
  }
void MainWindow::setPrompt(QString text) {
    ui->lblPrompt->setText(text);
}
