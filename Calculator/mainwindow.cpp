#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    calcClass(new CalculatorClass)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_clearButton_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText("0");
        calcClass->setCurrentValue(0);
        break;
    case 1:
        ui->currentNumberLabel->setText("0");
        calcClass->setCurrentValue(0);
        calcClass->setCurrentState(0);
        break;
    case 2:
        ui->currentNumberLabel->setText("0");
        calcClass->setCurrentValue(0);
        calcClass->setCurrentState(0);
        break;
    case 3:
        ui->currentNumberLabel->setText("0");
        calcClass->setCurrentValue(0);
        calcClass->setCurrentState(0);
        break;
    }
}

void MainWindow::on_divideButton_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "÷");
        calcClass->setOperationType(DIVISION);
        calcClass->setOperand1(calcClass->getCurrentValue());
        calcClass->setCurrentState(2);
        break;
    case 1:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "÷");
        calcClass->setOperationType(DIVISION);
        calcClass->setOperand1(calcClass->getCurrentValue());
        calcClass->setCurrentState(2);
        break;
    case 2:
        if (calcClass->getOperationType() == DIVISION)
        {
            break;
        }
        else
        {
            QString replaceString = ui->currentNumberLabel->text();
            replaceString.remove(replaceString.size()-1,1);
            replaceString += "÷";
            ui->currentNumberLabel->setText(replaceString);
            calcClass->setOperationType(DIVISION);
            break;
        }
    case 3:
        switch (calcClass->getOperationType())
        {
        case ADDITION:
            calcClass->setResult(calcClass->getOperand1() + calcClass->getCurrentValue());
            break;
        case SUBTRACTION:
            calcClass->setResult(calcClass->getOperand1() - calcClass->getCurrentValue());
            break;
        case MULTIPLICATION:
            calcClass->setResult(calcClass->getOperand1() * calcClass->getCurrentValue());
            break;
        case DIVISION:
            calcClass->setResult(calcClass->getOperand1() / calcClass->getCurrentValue());
            break;
        }
        ui->currentNumberLabel->setText(QString::number(calcClass->getResult()) + "÷");
        calcClass->setOperand1(calcClass->getResult());
        calcClass->setCurrentValue(calcClass->getResult());
        calcClass->setOperationType(DIVISION);
        calcClass->setCurrentState(2);
        break;
    }
}

void MainWindow::on_button1_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText("1");
        calcClass->setCurrentValue(1);
        calcClass->setCurrentState(1);
        break;
    case 1:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "1");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 1);
        break;
    case 2:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "1");
        calcClass->setCurrentValue(1);
        calcClass->setCurrentState(3);
        break;
    case 3:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "1");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 1);
        break;
    }
}

void MainWindow::on_button2_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText("2");
        calcClass->setCurrentValue(2);
        calcClass->setCurrentState(1);
        break;
    case 1:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "2");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 2);
        break;
    case 2:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "2");
        calcClass->setCurrentValue(2);
        calcClass->setCurrentState(3);
        break;
    case 3:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "2");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 2);
        break;
    }
}

void MainWindow::on_button3_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText("3");
        calcClass->setCurrentValue(3);
        calcClass->setCurrentState(1);
        break;
    case 1:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "3");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 3);
        break;
    case 2:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "3");
        calcClass->setCurrentValue(3);
        calcClass->setCurrentState(3);
        break;
    case 3:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "3");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 3);
        break;
    }
}

void MainWindow::on_multiplyButton_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "x");
        calcClass->setOperationType(MULTIPLICATION);
        calcClass->setOperand1(calcClass->getCurrentValue());
        calcClass->setCurrentState(2);
        break;
    case 1:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "x");
        calcClass->setOperationType(MULTIPLICATION);
        calcClass->setOperand1(calcClass->getCurrentValue());
        calcClass->setCurrentState(2);
        break;
    case 2:
        if (calcClass->getOperationType() == MULTIPLICATION)
        {
            break;
        }
        else
        {
            QString replaceString = ui->currentNumberLabel->text();
            replaceString.remove(replaceString.size()-1,1);
            replaceString += "x";
            ui->currentNumberLabel->setText(replaceString);
            calcClass->setOperationType(MULTIPLICATION);
            break;
        }
    case 3:
        switch (calcClass->getOperationType())
        {
        case ADDITION:
            calcClass->setResult(calcClass->getOperand1() + calcClass->getCurrentValue());
            break;
        case SUBTRACTION:
            calcClass->setResult(calcClass->getOperand1() - calcClass->getCurrentValue());
            break;
        case MULTIPLICATION:
            calcClass->setResult(calcClass->getOperand1() * calcClass->getCurrentValue());
            break;
        case DIVISION:
            calcClass->setResult(calcClass->getOperand1() / calcClass->getCurrentValue());
            break;
        }
        ui->currentNumberLabel->setText(QString::number(calcClass->getResult()) + "x");
        calcClass->setOperand1(calcClass->getResult());
        calcClass->setCurrentValue(calcClass->getResult());
        calcClass->setOperationType(MULTIPLICATION);
        calcClass->setCurrentState(2);
        break;
    }
}

void MainWindow::on_button4_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText("4");
        calcClass->setCurrentValue(4);
        calcClass->setCurrentState(1);
        break;
    case 1:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "4");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 4);
        break;
    case 2:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "4");
        calcClass->setCurrentValue(4);
        calcClass->setCurrentState(3);
        break;
    case 3:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "4");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 4);
        break;
    }
}

void MainWindow::on_button5_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText("5");
        calcClass->setCurrentValue(5);
        calcClass->setCurrentState(1);
        break;
    case 1:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "5");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 5);
        break;
    case 2:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "5");
        calcClass->setCurrentValue(5);
        calcClass->setCurrentState(3);
        break;
    case 3:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "5");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 5);
        break;
    }
}

void MainWindow::on_button6_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText("6");
        calcClass->setCurrentValue(6);
        calcClass->setCurrentState(1);
        break;
    case 1:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "6");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 6);
        break;
    case 2:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "6");
        calcClass->setCurrentValue(6);
        calcClass->setCurrentState(3);
        break;
    case 3:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "6");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 6);
        break;
    }
}

void MainWindow::on_subtractButton_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "-");
        calcClass->setOperationType(SUBTRACTION);
        calcClass->setOperand1(calcClass->getCurrentValue());
        calcClass->setCurrentState(2);
        break;
    case 1:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "-");
        calcClass->setOperationType(SUBTRACTION);
        calcClass->setOperand1(calcClass->getCurrentValue());
        calcClass->setCurrentState(2);
        break;
    case 2:
        if (calcClass->getOperationType() == SUBTRACTION)
        {
            break;
        }
        else
        {
            QString replaceString = ui->currentNumberLabel->text();
            replaceString.remove(replaceString.size()-1,1);
            replaceString += "-";
            ui->currentNumberLabel->setText(replaceString);
            calcClass->setOperationType(SUBTRACTION);
            break;
        }
    case 3:
        switch (calcClass->getOperationType())
        {
        case ADDITION:
            calcClass->setResult(calcClass->getOperand1() + calcClass->getCurrentValue());
            break;
        case SUBTRACTION:
            calcClass->setResult(calcClass->getOperand1() - calcClass->getCurrentValue());
            break;
        case MULTIPLICATION:
            calcClass->setResult(calcClass->getOperand1() * calcClass->getCurrentValue());
            break;
        case DIVISION:
            calcClass->setResult(calcClass->getOperand1() / calcClass->getCurrentValue());
            break;
        }
        ui->currentNumberLabel->setText(QString::number(calcClass->getResult()) + "-");
        calcClass->setOperand1(calcClass->getResult());
        calcClass->setCurrentValue(calcClass->getResult());
        calcClass->setOperationType(SUBTRACTION);
        calcClass->setCurrentState(2);
        break;
    }
}

void MainWindow::on_button7_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText("7");
        calcClass->setCurrentValue(7);
        calcClass->setCurrentState(1);
        break;
    case 1:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "7");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 7);
        break;
    case 2:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "7");
        calcClass->setCurrentValue(7);
        calcClass->setCurrentState(3);
        break;
    case 3:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "7");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 7);
        break;
    }
}

void MainWindow::on_button8_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText("8");
        calcClass->setCurrentValue(8);
        calcClass->setCurrentState(1);
        break;
    case 1:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "8");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 8);
        break;
    case 2:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "8");
        calcClass->setCurrentValue(8);
        calcClass->setCurrentState(3);
        break;
    case 3:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "8");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 8);
        break;
    }
}

void MainWindow::on_button9_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText("9");
        calcClass->setCurrentValue(9);
        calcClass->setCurrentState(1);
        break;
    case 1:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "9");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 9);
        break;
    case 2:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "9");
        calcClass->setCurrentValue(9);
        calcClass->setCurrentState(3);
        break;
    case 3:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "9");
        calcClass->setCurrentValue((calcClass->getCurrentValue() * 10) + 9);
        break;
    }
}

void MainWindow::on_addButton_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "+");
        calcClass->setOperationType(ADDITION);
        calcClass->setOperand1(calcClass->getCurrentValue());
        calcClass->setCurrentState(2);
        break;
    case 1:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "+");
        calcClass->setOperationType(ADDITION);
        calcClass->setOperand1(calcClass->getCurrentValue());
        calcClass->setCurrentState(2);
        break;
    case 2:
        if (calcClass->getOperationType() == ADDITION)
        {
            break;
        }
        else
        {
            QString replaceString = ui->currentNumberLabel->text();
            replaceString.remove(replaceString.size()-1,1);
            replaceString += "+";
            ui->currentNumberLabel->setText(replaceString);
            calcClass->setOperationType(ADDITION);
            break;
        }
    case 3:
        switch (calcClass->getOperationType())
        {
        case ADDITION:
            calcClass->setResult(calcClass->getOperand1() + calcClass->getCurrentValue());
            break;
        case SUBTRACTION:
            calcClass->setResult(calcClass->getOperand1() - calcClass->getCurrentValue());
            break;
        case MULTIPLICATION:
            calcClass->setResult(calcClass->getOperand1() * calcClass->getCurrentValue());
            break;
        case DIVISION:
            calcClass->setResult(calcClass->getOperand1() / calcClass->getCurrentValue());
            break;
        }
        ui->currentNumberLabel->setText(QString::number(calcClass->getResult()) + "+");
        calcClass->setOperand1(calcClass->getResult());
        calcClass->setCurrentValue(calcClass->getResult());
        calcClass->setOperationType(ADDITION);
        calcClass->setCurrentState(2);
        break;
    }
}

void MainWindow::on_button0_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        ui->currentNumberLabel->setText("0");
        calcClass->setCurrentValue(0);
        break;
    case 1:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "0");
        calcClass->setCurrentValue(calcClass->getCurrentValue() * 10);
        break;
    case 2:
        ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "0");
        calcClass->setCurrentValue(0);
        calcClass->setCurrentState(3);
        break;
    case 3:
        if (calcClass->getCurrentValue() == 0)
        {
            break;
        }
        else
        {
            ui->currentNumberLabel->setText(ui->currentNumberLabel->text() + "0");
            calcClass->setCurrentValue(calcClass->getCurrentValue() * 10);
        }
        break;
    }
}

void MainWindow::on_equalsButton_clicked()
{
    switch (calcClass->getCurrentState())
    {
    case 0:
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        switch (calcClass->getOperationType())
        {
        case ADDITION:
            calcClass->setResult(calcClass->getOperand1() + calcClass->getCurrentValue());
            break;
        case SUBTRACTION:
            calcClass->setResult(calcClass->getOperand1() - calcClass->getCurrentValue());
            break;
        case MULTIPLICATION:
            calcClass->setResult(calcClass->getOperand1() * calcClass->getCurrentValue());
            break;
        case DIVISION:
            calcClass->setResult(calcClass->getOperand1() / calcClass->getCurrentValue());
            break;
        }
        ui->currentNumberLabel->setText(QString::number(calcClass->getResult()));
        calcClass->setCurrentValue(calcClass->getResult());
        calcClass->setCurrentState(0);
    }
}
