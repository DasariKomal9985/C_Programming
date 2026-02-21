#include <stdio.h>
#include <unistd.h>
#include "header.h"

void hello(void)
{
    printf("Inside hello()\n");
    printf("PID is: %d\n", getpid());
}