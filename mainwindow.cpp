#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnfive_clicked()
{


        // Pehle se jo likha hai wo uthao aur aage "5" laga do
        QString value = ui->label->text();
        if(value == "0") {
            ui->label->setText("5");
        } else {
            ui->label->setText(value + "5");
        }
}


void MainWindow::on_Btn1_clicked()
{
    // Pehle se jo likha hai wo uthao aur aage "1" laga do
    QString value = ui->label->text();
    if(value == "0") {
        ui->label->setText("1");
    } else {
        ui->label->setText(value + "1");
    }
}


void MainWindow::on_btn2_clicked()
{
    // Pehle se jo likha hai wo uthao aur aage "2" laga do
    QString value = ui->label->text();
    if(value == "0") {
        ui->label->setText("2");
    } else {
        ui->label->setText(value + "2");
    }
}


void MainWindow::on_btn3_clicked()
{
    // Pehle se jo likha hai wo uthao aur aage "3" laga do
    QString value = ui->label->text();
    if(value == "0") {
        ui->label->setText("3");
    } else {
        ui->label->setText(value + "3");
    }
}


void MainWindow::on_btn4_clicked()
{
    // Pehle se jo likha hai wo uthao aur aage "4" laga do
    QString value = ui->label->text();
    if(value == "0") {
        ui->label->setText("4");
    } else {
        ui->label->setText(value + "4");
    }
}

void MainWindow::on_btn6_clicked()
{
    // Pehle se jo likha hai wo uthao aur aage "6" laga do
    QString value = ui->label->text();
    if(value == "0") {
        ui->label->setText("6");
    } else {
        ui->label->setText(value + "6");
    }
}





void MainWindow::on_btn7_clicked()
{
    // Pehle se jo likha hai wo uthao aur aage "7" laga do
    QString value = ui->label->text();
    if(value == "0") {
        ui->label->setText("7");
    } else {
        ui->label->setText(value + "7");
    }
}


void MainWindow::on_btn8_clicked()
{
    // Pehle se jo likha hai wo uthao aur aage "8" laga do
    QString value = ui->label->text();
    if(value == "0") {
        ui->label->setText("8");
    } else {
        ui->label->setText(value + "8");
    }
}


void MainWindow::on_btn9_clicked()
{
    // Pehle se jo likha hai wo uthao aur aage "9" laga do
    QString value = ui->label->text();
    if(value == "0") {
        ui->label->setText("9");
    } else {
        ui->label->setText(value + "9");
    }
}


void MainWindow::on_btn0_clicked()
{
    // Pehle se jo likha hai wo uthao aur aage "0" laga do
    QString value = ui->label->text();
    if(value == "0") {
        ui->label->setText("0");
    } else {
        ui->label->setText(value + "0");
    }
}


void MainWindow::on_btnplus_clicked()
{
     {
        firstNum = ui->label->text().toDouble(); // Display ka number save karein
        operation = "+";                          // Operation yaad rakhein
        ui->label->setText("0");                 // Screen clear karein
    }
}


void MainWindow::on_btnminus_clicked()
{
      {
        firstNum = ui->label->text().toDouble();
        operation = "-";
        ui->label->setText("0");
    }
}


void MainWindow::on_btnmultiply_clicked()
{
    {
    firstNum = ui->label->text().toDouble();
    operation = "x";
    ui->label->setText("0");
    }
}

void MainWindow::on_btndivide_clicked()
{
     {
        firstNum = ui->label->text().toDouble();
        operation = "/";
        ui->label->setText("0");
    }
}


void MainWindow::on_btnequals_clicked()
{
    {
        double secondNum = ui->label->text().toDouble();
        double result = 0;

        if (operation == "+") {
            result = firstNum + secondNum;
        } else if (operation == "-") {
            result = firstNum - secondNum;
        } else if (operation == "x") {
            result = firstNum * secondNum;
        } else if (operation == "/") {
            if (secondNum != 0) {
                result = firstNum / secondNum;
            } else {
                ui->label->setText("Error"); // Zero se divide nahi ho sakta
                return;
            }
        }

        ui->label->setText(QString::number(result));
    }
}


void MainWindow::on_btnclear_clicked()
{
    {
        ui->label->setText("0"); // Display ko zero kar dein
        firstNum = 0;            // Purana number mita dein
        operation = "";          // Operation khatam kar dein
    }
}


void MainWindow::on_btndel_clicked()
{

    {
        QString text = ui->label->text();
        text.chop(1); // Aakhri character delete karein
        if (text.isEmpty() || text == "-") {
            text = "0";
        }
        ui->label->setText(text);
    }
}


void MainWindow::on_btndecimal_clicked()
{
    {
        // Check karein ke kahin pehle se point to maujood nahi
        if(!ui->label->text().contains(".")) {
            ui->label->setText(ui->label->text() + ".");
        }
    }
}

