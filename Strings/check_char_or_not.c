#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,x=0,j;
    //enter size of the string
    printf("enter size of the char :");
    scanf("%d",&n);
    char name[n];
    char name1[100];
    //enter string with combination of number and alphabet
    printf("enter string:");
    scanf("%s",name);
    //check in loop wheather alphabet are in givinnumber
    for(i=0,j=0;name[i];i++)
    {
        if(name[i]>='0' && name[i]<='9')
        {
        name1[j]=name[i];
        j++;
        }
        
    }
  //string comperasation
    int result = strcmp(name, name1);
   
    if(result<=0)
    {
        printf("valid");
    }
    else
    {
        printf("invalid");
    }
  
    

}