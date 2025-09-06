#include<stdio.h>
int main(){
    int a=5,b=20;
    printf("Before swap: %d %d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("After swap: %d %d\n",a,b);
    return 0;
}