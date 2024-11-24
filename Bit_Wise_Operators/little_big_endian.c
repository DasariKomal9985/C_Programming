//WAP to convert Little endian integer to Big endian integer 



#include<stdio.h>
int main()
{
int a;
printf("enter hexa decimal number");
scanf("%x",&a);
printf("a<<24  :%x\n",(a<<24));
printf("a>>24  :%x\n",(a<<24)&(0x000000ff));
printf("a>>8  :%x\n",a>>8);
printf("a<<8  :%x\n",a<<8);
printf("a>>8 & 0x0000ff00  :%x\n",(a>>8)&(0x0000ff00));
printf("a<<8 & 0x0000ff00  :%x\n",(a<<8)&(0x0000ff00));
a=(a<<24)|(a>>24)|(a>>8)&(0x0000ff00)|(a<<8)&(0x00ff0000);

printf("%x\n",a);
}
