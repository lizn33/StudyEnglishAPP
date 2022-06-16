#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //设置mainWindow格式
    setWindowTitle("学习英语");

    this->setObjectName("show");
    this->setStyleSheet("#show{border-image:url(:/Image/show_bg.jpg);}");
    this->setWindowIcon(QIcon(":/Image/study.jpg"));

    this->resize(QSize(1350, 730));

    //设置主窗口，以便设置布局
    QWidget *weight = new QWidget(this);
    this->setCentralWidget(weight);

    //设置侧边list，即选项部分
    features_list = new QListWidget(this);

    features_list->insertItem(0, tr("选择单词集"));
    features_list->insertItem(1, tr("查询单词"));
    features_list->insertItem(2, tr("填写单词"));
    features_list->insertItem(3, tr("选择单词"));

    features_list->setStyleSheet("QListWidget{background:transparent; font-family:仿宋; font-size:25px}"
                                 "QListWidget::item{height:50px}");

    // 设置右边stack，即功能页面部分
    features_stack = new QStackedWidget(this);

    Input *input_dia = new Input(this);
    Choice *choice_dia = new Choice(this);
    Show *show_dia = new Show(this);
    Search *sear_dia = new Search(this);

    features_stack->addWidget(show_dia);
    features_stack->addWidget(sear_dia);
    features_stack->addWidget(input_dia);
    features_stack->addWidget(choice_dia);

    //设置布局
    QHBoxLayout* base_layout = new QHBoxLayout(weight);

    base_layout->setMargin(5);
    base_layout->setSpacing(5);

    base_layout->addWidget(features_list);
    base_layout->addWidget(features_stack);

    base_layout->setStretchFactor(features_list,1);
    base_layout->setStretchFactor(features_stack,6);


    //信号和槽
    connect(features_list,SIGNAL(currentRowChanged(int)), features_stack,SLOT(setCurrentIndex(int)));
}
MainWindow::~MainWindow()
{
    delete ui;
}

