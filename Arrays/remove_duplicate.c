#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 3};
    int n = 6;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];

                n--;      // reduce size
                j--;      // recheck same position
            }
        }
    }

    printf("After removing duplicates:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}