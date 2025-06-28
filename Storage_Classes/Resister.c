#include <stdio.h>
void demoRegister() {
    register int i;
    for (i=1; i<=5; i++)
        printf("%d ", i);
    printf("\n");
}
int main() {
    demoRegister();
    return 0;
}
/*
Suggests compiler to keep variable in CPU register instead of RAM.

Faster access.

Can't get its address using & (because it may not have RAM address).
*/