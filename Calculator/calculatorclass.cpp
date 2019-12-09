#include "calculatorclass.h"

CalculatorClass::CalculatorClass()
{
    currentState = 0;
    currentValue = 0;
}

void CalculatorClass::setCurrentState(int value)
{
    currentState = value;
}

int CalculatorClass::getCurrentState()
{
    return currentState;
}

void CalculatorClass::setOperationType(OperationType value)
{
    operationType = value;
}

OperationType CalculatorClass::getOperationType()
{
    return operationType;
}

void CalculatorClass::setCurrentValue(double value)
{
    currentValue = value;
}

double CalculatorClass::getCurrentValue()
{
    return currentValue;
}

void CalculatorClass::setOperand1(double value)
{
    operand1 = value;
}

double CalculatorClass::getOperand1()
{
    return operand1;
}

void CalculatorClass::setResult(double value)
{
    result = value;
}

double CalculatorClass::getResult()
{
    return result;
}
