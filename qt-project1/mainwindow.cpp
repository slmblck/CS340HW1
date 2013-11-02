#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
/**
 * Constructor for MainWindow
 *
 * @param parent a parent widget, can be null
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
/*!
 * \brief MainWindow::~MainWindow
 * Destructor for MainWindow
 */
MainWindow::~MainWindow()
{
    delete ui;
}

/*! \brief A puchButton Slot
 * Causes an action to be peformed on puchButton click
*/
void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Clicked the puchButton!");
    std::cout << "pushbutton " << std::endl;
}

/*! \brief A puchButton Slot
 * Causes an action to be peformed on NewButton click
*/
void MainWindow::on_NewButton_clicked()
{
    ui->label->setText("You clicked the New Button! Congrats!");
    std::cout << "You clicked the New Button! Congrats!" << std::endl;
}

/*! \brief A puchButton Slot
 * Causes an action to be peformed on NewButton click
*/
void MainWindow::on_omgButton_clicked()
{
    ui->label->setText("You're really good at clocking buttons!");
    std::cout << "You're really good at clocking buttons!" << std::endl;
}
