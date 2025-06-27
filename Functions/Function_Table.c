#include<stdio.h>
void Table(int num);
int main()
{
    int num;
    printf("Enter What Table You Needn:");
    scanf("%d",&num);
    Table(num);
}
void Table(int num)
{
    int i;
    for(i=0;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
}