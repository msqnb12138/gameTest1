#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

static double deltTime = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    showFullScreen();

    updateTimer = new QTimer;
    updateTimer->start(8);          //125֡
    deltTime = 1.0/125;
    connect(updateTimer, &QTimer::timeout, this, &MainWindow::update);

    m_MainScene = new MainScene();
    m_MainView = new MainView(this);
    m_MainView->setScene(m_MainScene);
    player = new PlayerItem();
    m_MainScene->addItem(player);
    m_MainView->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update()
{
    if(m_MainScene!=nullptr){
        for(int i=0;i<m_MainScene->items().size();i++){
            m_MainScene->items().at(i)->update();
        }
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    QMainWindow::keyPressEvent(event);


}

double MainWindow::getDeltTime()
{
    return deltTime;
}
