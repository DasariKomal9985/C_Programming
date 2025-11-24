#include <stdio.h>

#define PI 3.14        // macro definition
#define DEBUG          // macro flag

int main() {

    printf("Value of PI = %.2f\n", PI);

#ifdef DEBUG
    printf("Debug mode is ON\n");
#endif

#ifndef TEST
    printf("TEST is not defined\n");
#endif

#undef PI   // remove PI macro

#ifdef PI
    printf("PI is still defined\n");
#else
    printf("PI is undefined now\n");
#endif

    return 0;
}
