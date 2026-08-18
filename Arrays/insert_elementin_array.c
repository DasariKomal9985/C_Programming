#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4};
    int n = 4;
    int pos = 2;
    int value = 99;

    if (n == 10)
    {
        printf("Array full\n");
        return 0;
    }

    if (pos < 0 || pos > n)
    {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}