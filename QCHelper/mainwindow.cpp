#include "mainwindow.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    QPushButton *btn1 = new QPushButton("添加");
    QPushButton *btn2 = new QPushButton("删除");

    QHBoxLayout *btnLayout = new QHBoxLayout;
    btnLayout->addWidget(btn1);
    btnLayout->addWidget(btn2);



    /*添加一个项列表并把它放置于一个DockWidget中*/
    m_ListView = new ListView;
    QVBoxLayout *DWLayout = new QVBoxLayout;
    DWLayout->setContentsMargins(0,0,0,2);
    DWLayout->setSpacing(2);
    DWLayout->addWidget(m_ListView);
    DWLayout->addLayout(btnLayout);
    QWidget *DWWidget = new QWidget;
    DWWidget->setMinimumWidth(250);
    DWWidget->setLayout(DWLayout);
    m_indexDWidget = new QDockWidget;
    m_indexDWidget->setWidget(DWWidget);
    this->addDockWidget(Qt::LeftDockWidgetArea,m_indexDWidget);





    /*主布局管理器.*/
    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->setContentsMargins(0,0,0,0);
    /*主widget*/
    QWidget *centerWidget = new QWidget;
    centerWidget->setContentsMargins(0,0,0,0);
    centerWidget->setLayout(mainLayout);
    this->setCentralWidget(centerWidget);



    this->resize(1280,720);
}

MainWindow::~MainWindow()
{
}
