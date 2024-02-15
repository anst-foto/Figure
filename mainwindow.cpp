#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "CircleBuilder.h"
#include "SquareBuilder.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();

    connect(ui->comboBoxColors, &QComboBox::currentTextChanged, this, &MainWindow::changeColor);
    connect(ui->inputDeameter, &QSpinBox::valueChanged, this, &MainWindow::inputSize);
    connect(ui->buttonDraw, &QPushButton::clicked, this, &MainWindow::draw);
    connect(ui->comboBoxFigure, &QComboBox::currentTextChanged, this, &MainWindow::changeFigure);
}

MainWindow::~MainWindow()
{
    delete scene;
    delete ui;
}

void MainWindow::changeFigure(QString figure)
{
    if(figure == "Circle") {
        figureBuilder = new CircleBuilder();
        ui->label_2->setText("Diameter");
    } else if (figure == "Square") {
        figureBuilder = new SquareBuilder();
        ui->label_2->setText("Length");
    }
}

void MainWindow::changeColor(QString color)
{
    if (color == "Red") {
        figureBuilder->setColor(QBrush(Qt::red));
    } else if (color == "Green") {
        figureBuilder->setColor(QBrush(Qt::green));
    } else if (color == "Blue") {
        figureBuilder->setColor(QBrush(Qt::blue));
    } else if (color == "Black") {
        figureBuilder->setColor(QBrush(Qt::black));
    } else {
        figureBuilder->setColor(QBrush(Qt::yellow));
    }
}

void MainWindow::inputSize(int size)
{
    figureBuilder->setSize(size);
}

void MainWindow::draw()
{
    scene->addItem(figureBuilder->draw());
    ui->graphicsView->setScene(scene);
}
