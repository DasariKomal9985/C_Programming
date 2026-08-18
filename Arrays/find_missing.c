#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = 5;   // numbers from 1 to 5

    int sum = 0;

    for (int i = 0; i < n - 1; i++)
        sum += arr[i];

    int total = n * (n + 1) / 2;

    printf("Missing number: %d\n", total - sum);

    return 0;
}