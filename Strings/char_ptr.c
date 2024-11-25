#include<stdio.h>
#include<string.h>
int main()
{
    char* ptr="komal rao";
    printf("%s",ptr);
    printf("\n");
    ptr[0]='m';
    ptr="mohan roe";
    printf("%s",ptr);
    printf("%c",*ptr);
}