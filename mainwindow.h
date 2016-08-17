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
    void on_lneInput_returnPressed();

    void on_lneInput_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
    bool eventFilter(QObject *obj, QEvent *event);
    void tabPressed(QString text, int cursorPos);
};

#endif // MAINWINDOW_H
