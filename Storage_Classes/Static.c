/*Keeps its value between function calls.

Inside function: retains last value.

Outside function: limits visibility to this file.*/

#include <stdio.h>
void demoStatic() {
    static int count = 0;
    count++;
    printf("count = %d\n", count);
}
int main() {
    demoStatic();  // count=1
    demoStatic();  // count=2
    demoStatic();  // count=3
    return 0;
}
