#ifndef CALCULATORCLASS_H
#define CALCULATORCLASS_H

#include <QWidget>

enum OperationType {ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION};

class CalculatorClass
{
public:
    CalculatorClass();
    void setCurrentState(int value);
    int getCurrentState();
    void setOperationType(OperationType value);
    OperationType getOperationType();
    void setCurrentValue(double value);
    double getCurrentValue();
    void setOperand1(double value);
    double getOperand1();
    void setResult(double value);
    double getResult();

private:
    OperationType operationType;
    double currentValue;
    double operand1;
    double result;
    int currentState;

};

#endif // CALCULATORCLASS_H
