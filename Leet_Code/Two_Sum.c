#include<stdio.h>
#include<stdlib.h>

int *Twosum(int *num,int numsize,int target,int *returnsize);
int main()
{
    int i=0,numsize,num[6],target;
    int *returnsize;
    int *result;
    printf("enter size :");
    scanf("%d",&numsize);
    printf("enter numbers :");
    for(i=0;i<numsize;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("enter target");
    scanf("%d",&target);
    result = Twosum(num, numsize, target, returnsize);
    for(i=0;i<2;i++)
    {
        printf("%d\t",result[i]);
    }

}
int *Twosum(int *num,int numsize,int target,int *returnsize)
{
    int i=0,j;
    int *node = (int*)malloc(2*sizeof(int));
    *returnsize = 2;
    
    for(i=0;i<numsize-1;i++)
    {
        for(j=i+1;j<numsize;j++)
        {
            if(num[i]+num[j]==target)
            {
                node[0]=i;
                node[1]=j;
            }
        }
    
    }
    return node;

}