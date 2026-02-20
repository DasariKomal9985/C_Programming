#include <stdio.h>

int main() {
    printf("Size of char    : %d byte(s)\n", (int)sizeof(char));
    printf("Size of int     : %d byte(s)\n", (int)sizeof(int));
    printf("Size of float   : %d byte(s)\n", (int)sizeof(float));
    printf("Size of double  : %d byte(s)\n", (int)sizeof(double));
    printf("Size of long    : %d byte(s)\n", (int)sizeof(long));
    printf("Size of long long : %d byte(s)\n", (int)sizeof(long long));
    printf("Size of long double : %d byte(s)\n", (int)sizeof(long double));

    return 0;
}
