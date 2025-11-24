#include <stdio.h>

int main() {
    int n, x, freq = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to find frequency: ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++)
        if(arr[i] == x)
            freq++;

    printf("Frequency = %d\n", freq);
    return 0;
}
