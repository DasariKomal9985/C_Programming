#include<stdio.h>
int main()
{
    int a = 2;
    int b = 3;
    printf(" Before swap : a=%d b=%d\n",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf(" After swap : a=%d b=%d\n",a,b);
    return 0;
}