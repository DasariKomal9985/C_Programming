#include <stdio.h>
#include "calculator.h"

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int divide(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}