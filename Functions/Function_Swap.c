#include<stdio.h>
void Swap(int *a, int *b);
int main()
{
    int num1,num2;
    printf("Enter Two Numbers to Swap:\n");
    scanf("%d %d",&num1,&num2);
    printf("Before Swapping: num1 = %d, num2 = %d\n", num1, num2);
    Swap(&num1, &num2);
    printf("After Swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}

void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}