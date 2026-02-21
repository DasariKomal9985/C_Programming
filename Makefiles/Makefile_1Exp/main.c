#include <stdio.h>
#include "header.h"

int main()
{
    printf("In main()\n");

    printf("Calling hello()\n");
    hello();

    printf("Calling add()\n");
    add(3, 5);

    printf("Back to main()\n");

    return 0;
}