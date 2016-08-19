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

private:
    Ui::MainWindow *ui;
    void initGame();
};

#endif // MAINWINDOW_H
