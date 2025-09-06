#include<stdio.h>
int main()
{
    int a,size,i;
    int largest;
    printf("enter size of an array :");
    scanf("%d",&size);
    int arr[size];
    printf("enter numbers :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    printf("largest number is : %d\n",largest);
    return 0;
}