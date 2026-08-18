#include <stdio.h>

int main()
{
    int arr[] = {5, 10, 20, 8, 15};
    int n = 5;

    if (n < 3)
    {
        printf("Not enough elements\n");
        return 0;
    }

    int first = arr[0];
    int second = arr[1];
    int third = arr[2];

    // Sort first 3 manually
    if (first < second)
    {
        int temp = first;
        first = second;
        second = temp;
    }

    if (first < third)
    {
        int temp = first;
        first = third;
        third = temp;
    }

    if (second < third)
    {
        int temp = second;
        second = third;
        third = temp;
    }

    // Now check remaining elements
    for (int i = 3; i < n; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third)
        {
            third = arr[i];
        }
    }

    printf("Third largest: %d\n", third);

    return 0;
}