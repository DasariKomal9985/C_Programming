#include<stdio.h>
void bit_pattern(int a);

int main()
{
int a;
printf ("Enter an integer ");
scanf ("%d",&a);
bit_pattern(a) ;
}

void bit_pattern(int a)
{
int i,mask;
for (i=15; i>=0; i--)
{
mask=1<<i;
if ( (a&mask) == 0)
{
printf ("0");
}
else
{
printf("1");
}
}
}