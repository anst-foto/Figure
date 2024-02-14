#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();

    circleBuilder = new CircleBuilder();

    connect(ui->comboBoxColors, &QComboBox::currentTextChanged, this, &MainWindow::changeColor);
    connect(ui->inputDeameter, &QSpinBox::valueChanged, this, &MainWindow::inputDiameter);

    scene->addItem(circleBuilder->draw());
    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete circleBuilder;

    delete scene;
    delete ui;
}

void MainWindow::changeColor(QString color)
{
    if (color == "Red") {
        circleBuilder->setColor(QBrush(Qt::red));
    } else if (color == "Green") {
        circleBuilder->setColor(QBrush(Qt::green));
    } else if (color == "Blue") {
        circleBuilder->setColor(QBrush(Qt::blue));
    } else if (color == "Black") {
        circleBuilder->setColor(QBrush(Qt::black));
    } else {
        circleBuilder->setColor(QBrush(Qt::yellow));
    }
}

void MainWindow::inputDiameter(int diameter)
{
    circleBuilder->setDiameter(diameter);
}
