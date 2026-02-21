#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: calc <operator> <num1> <num2>\n");
        return 1;
    }

    char operator = argv[1][0];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    calculate(operator, num1, num2);

    return 0;
}