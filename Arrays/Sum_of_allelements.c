#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: \n", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    return 0;
}
