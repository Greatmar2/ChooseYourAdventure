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
    ui->lneInput->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_lneInput_returnPressed()
{

}

void MainWindow::on_lneInput_textEdited(const QString &arg1)
{

}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
  if (obj == ui->lneInput)
  {
     if (event->type() == QEvent::KeyPress)
     {
         QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
         if (keyEvent->key() == Qt::Key_Tab)
         {
             tabPressed(ui->lneInput->text(), ui->lneInput->cursorPosition());
             return true;
         }
     }
  }

    return QMainWindow::eventFilter(obj, event);
}

void MainWindow::setOutput(QString text) {
    ui->txbrOutput->setText(text);
  }
void MainWindow::setPrompt(QString text) {
    ui->lblPrompt->setText(text);
}

void MainWindow::tabPressed(QString text, int cursorPos) {

}
