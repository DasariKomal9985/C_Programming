#include<stdio.h>
int main()
{
    int b1,b2,p,s,e,f,i,j,k,sum=0,total=0;
    printf("enter capacity of bus:\n");
    scanf("%d",&b1);
    printf("enter number of bus stops:\n");
    scanf("%d",&b2);
    printf("no of passengers:\n");
    scanf("%d",&p);
    printf("start:\n");
    scanf("%d",&s);
    printf("end:\n");
    scanf("%d",&e);
    printf("fare:\n");
    scanf("%d",&f);
    int arrp[p];
    int arrs[s];
    int arre[e];
    int arrf[f];
    printf("enter no of passengers:\n");
    for(i=0;i<p;i++)
    {
        scanf("%d",&arrp[i]);
    }
    printf("enter start positions:\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&arrs[i]);
    }
    printf("enter end positions:\n");
    for(i=0;i<e;i++)
    {
        scanf("%d",&arre[i]);
    }
    printf("enter no of fare:\n");
    for(i=0;i<f;i++)
    {
        scanf("%d",&arrf[i]);
    }
    for(i=0;i<p;i++)
    {
        total=total+arrp[i];
    }
    
    
    for(i=0;i<p;i++)
    {
    if(arrp[i]<b1)
    {
        if(arrp[i]<total)
        {
            sum=sum+arrp[i]*arrf[i];
        }
    }
    
    }
    printf("fare amount is :%d\n",sum);



    
}