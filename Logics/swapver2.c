#include<stdio.h>
int main()
{
    int a,b,choise;
    printf("Enter any two numbers : to swap\n");
    scanf("%d %d",&a,&b);
    printf("2.)using third variable\n");
    printf("3.)without using third variable arthmatic operation\n");
    printf("4.)without using third variable bitwise operation\n");
    printf("Enter your choise :");
    scanf("%d",&choise);
    printf("Before swap : a=%d b=%d\n",a,b);
    if(a==0 || b==0)
    {
        printf("swap not  possible\n");
        return 0;
    }
    switch(choise)
    {
        case 2:
        {
            int temp;
            temp=a;
            printf("temp=%d a=%d",temp,a);
            printf("\n");
            a = b;
            printf("a=%d b=%d",a,b);
            printf("\n");
            b = temp;
            printf("After with third variable swap : a=%d b=%d\n",a,b);
            break;
        }
        case 3:
        {
            a = a + b;
            printf("a=%d b=%d",a,b);
            printf("\n");
            b = a - b;
            printf("a=%d b=%d",a,b);
            printf("\n");
            a = a - b;
            printf("After without third variable arthmatic operation swap : a=%d b=%d\n",a,b);
            break;
        }
        case 4:
        {
            a = a ^ b;
            printf("a=%d b=%d",a,b);
            printf("\n");
            b = a ^ b;
            printf("a=%d b=%d",a,b);
            printf("\n");
            a = a ^ b;
            printf("After without third variable bitwise operation swap : a=%d b=%d\n",a,b);
            break;
        }
        default:
        printf("Invalid Number");
        return 0;
    }
    return 0;
}