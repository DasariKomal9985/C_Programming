#include <stdio.h>

int main()
{
    int arr[] = {5, 1, 9, 2, 7};
    int n = 5;

    int smallest, second_smallest;

    // Assume first two elements
    if (arr[0] < arr[1])
    {
        smallest = arr[0];
        second_smallest = arr[1];
    }
    else
    {
        smallest = arr[1];
        second_smallest = arr[0];
    }

    // Start checking from 3rd element
    for (int i = 2; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_smallest && arr[i] != smallest)
        {
            second_smallest = arr[i];
        }
    }

    printf("Second smallest number: %d\n", second_smallest);

    return 0;
}