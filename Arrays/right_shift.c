#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int temp = arr[n - 1];   // store last element

    for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];  // shift right

    arr[0] = temp;           // place last element at first

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}