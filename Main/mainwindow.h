#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsItem>
#include <QTimer>
#include "../Graphics/mainscene.h"
#include "../Graphics/mainview.h"
#include "../Graphics/Human/playeritem.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public:
    void update();
    static double getDeltTime();

private:
    Ui::MainWindow *ui;

    MainScene *m_MainScene = nullptr;
    MainView *m_MainView = nullptr;
    QTimer * updateTimer = nullptr;
    PlayerItem *player = nullptr;

protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // MAINWINDOW_H
