#include <stdio.h>
void demoAuto() {
    auto int x = 5;  // same as: int x=5;
    printf("auto variable x = %d\n", x);
}
int main() {
    demoAuto();
    return 0;
}
