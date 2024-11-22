//Find letter in string and how many times

#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char ch;
    int i,j,count=0,var=0,k,size;
    printf("enter string:\n");
    scanf("%[^\n]s",str);
    printf("enter char:");
    scanf(" %c",&ch);
    size=strlen(str);
    for(i=0;i<size;i++)
    {
        if(ch==str[i])
        {
            count++;
            var=str[i];
        }
    }
    printf("count of %c is :%d\nrepeated element is :%c\n",var,count,var);
}
    