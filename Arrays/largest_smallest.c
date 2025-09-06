#include<stdio.h>
int main()
{
    int size,choise,i;
    int largest,smallest;
    printf("enter size of an array :");
    scanf("%d",&size);
    int arr[size];
    printf("enter numbers :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("2.) find largest number\n");
    printf("3.) find smallest number\n");
    printf("4.) find largest and smallest number\n");
    printf("enter your choise :");
    scanf("%d",&choise);
    switch(choise)
    {
        case 2:
        {
            largest = arr[0];
            for(i=0;i<size;i++)
            {
                if(arr[i]>largest)
                {
                    largest = arr[i];
                }
            }
            printf("largest number is : %d\n",largest);
            break;
        }
        case 3:
        {
            smallest = arr[0];
            for(i=0;i<size;i++)
            {
                if(arr[i]<smallest)
                {
                    smallest = arr[i];
                }
            }
            printf("smallest number is : %d\n",smallest);
            break;
        }
        case 4:
        {
            largest = arr[0];
            smallest = arr[0];
            for(i=0;i<size;i++)
            {
                if(arr[i]>largest)
                {
                    largest = arr[i];
                }
                if(arr[i]<smallest)
                {
                    smallest = arr[i];
                }
            }
            printf("largest number is :%d\n",largest);
            printf("smallest number is :%d\n",smallest);
            break;
        }
        default:
        printf("invalid input\n");
        return 0;
    }
    return 0;
}