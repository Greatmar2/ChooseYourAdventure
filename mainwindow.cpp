#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QString>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

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
    delete[] environments;
    delete &numEnvironments;
    delete[] areas;
    delete &numAreas;
    delete[] items;
    delete &numItems;
    delete[] events;
    delete &numEvents;
    delete[] NPCs;
    delete &numNPCs;
    delete[] races;
    delete &numRaces;
    delete[] results;
    delete &numResults;
}


/*
 * Begin functions that could be moved to main.cpp or engine.cpp, instead of running in GUI code.
 * Unfortuately, I could not get the GUI to reference engine/main staticly while allowing the engine
 * to reference the ui instance. This is likely because the MainWindow.cpp instanstiates its own ui
 * object when constructed, whereas the engine could only reference MainWindow.
 */
void MainWindow::initGame() {
    ui->lneInput->setVisible(false);
    ui->cmbFirst->setEnabled(false);
    ui->cmbSecond->setVisible(false);
    ui->cmbThird->setVisible(false);
    ui->cmbFourth->setVisible(false);
    ui->txbrOutput->setText("Program Start\n");

    readContent();
}

void MainWindow::readContent() {
    string path;
    int i;

    numEnvironments = 0;
    numAreas = 0;

    path = "/content/Environments.txt";
    vector <vector <string> > data;
    ifstream infile( path );
    string line;

    i = 0;
    while(getline(infile, line)) {
        stringstream linestream(line);
        string data;
        int id = i;
        string name;
        string description;
        int travelSpeed;
        string itemstream;
        Item* items;
        int numItems;
        string eventstream;
        Event* events;
        string eventProbStream;
        int eventProbs;
        int numEvents;
        string restrictionsStream;
        int restrictions;
        int numRestrictions;
        i++;

        getline(linestream, data, '|');
        linestream >> name >> description >> travelSpeed >> itemstream >> eventstream >> eventProbStream >> restrictionsStream;


        QString envText = "Environment read!\nID:";
        envText.append(id);
        appendOutput(envText);
    }

}

/*
 * End engine functions
 */

void MainWindow::setOutput(QString text) {
    ui->txbrOutput->setText(text);
}

void MainWindow::appendOutput(QString text) {
    ui->txbrOutput->append(text);
}

void MainWindow::setPrompt(QString text) {
    ui->lblPrompt->setText(text);
}

QString MainWindow::getOutput() {
    return ui->txbrOutput->toPlainText();
}

void MainWindow::on_lneTextInput_returnPressed()
{

}

void MainWindow::on_cmbFirst_currentIndexChanged(int index)
{

}

void MainWindow::on_cmbSecond_currentIndexChanged(int index)
{

}

void MainWindow::on_cmbThird_currentIndexChanged(int index)
{

}

void MainWindow::on_cmbFourth_currentIndexChanged(int index)
{

}
