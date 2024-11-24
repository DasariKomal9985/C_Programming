#include<stdio.h>
int main()
{
int num;
int mask=0x1;
printf ("Enter a number ");
scanf("%d",&num) ;
if( (num&mask) ==0)
{
printf ("Number is even\n");
}
else
{
printf ("Number is odd\n");
}
}