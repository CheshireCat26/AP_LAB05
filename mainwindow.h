#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    virtual void resizeEvent(QResizeEvent *);

private:
    Ui::MainWindow *ui;
    void spawnButtons(int sizeWindowX, int sizeWindowY);

    std::vector<QPushButton*> buttons;
};

#endif // MAINWINDOW_H
