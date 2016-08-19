#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "content.h"

namespace Ui {
class MainWindow;
}
using namespace std;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setOutput(QString text);
    void setPrompt(QString text);
    void appendOutput(QString text);
    QString getOutput();
private slots:
    void on_lneTextInput_returnPressed();

    void on_cmbFirst_currentIndexChanged(int index);

    void on_cmbSecond_currentIndexChanged(int index);

    void on_cmbThird_currentIndexChanged(int index);

    void on_cmbFourth_currentIndexChanged(int index);

private:
    Environment environments[NUM_ENVIRONMENTS];
    int numEnvironments;
    Area areas[NUM_AREAS];
    int numAreas;
    Item items[NUM_ITEMS];
    int numItems;
    Event events[NUM_EVENTS];
    int numEvents;
    NPC NPCs[NUM_NPCS];
    int numNPCs;
    Race races[NUM_RACES];
    int numRaces;
    Result results[NUM_RESULTS];
    int numResults;
    Ui::MainWindow *ui;
    void initGame();
    void readContent();
};

#endif // MAINWINDOW_H
