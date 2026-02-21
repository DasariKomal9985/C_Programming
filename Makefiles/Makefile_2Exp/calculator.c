#include <stdio.h>
#include "calculator.h"

void calculate(char operator, int a, int b)
{
    int result;

    switch (operator)
    {
        case '+':
            result = add(a, b);
            break;

        case '-':
            result = sub(a, b);
            break;

        case '/':
            result = divide(a, b);
            break;

        default:
            printf("Invalid operator\n");
            return;
    }

    printf("Result: %d\n", result);
}