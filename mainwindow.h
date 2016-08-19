#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setOutput(QString text);
    void setPrompt(QString text);

private slots:
    void on_lneTextInput_returnPressed();

    void on_cmbFirst_currentIndexChanged(int index);

    void on_cmbSecond_currentIndexChanged(int index);

    void on_cmbThird_currentIndexChanged(int index);

    void on_cmbFourth_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    void initGame();
};

#endif // MAINWINDOW_H
