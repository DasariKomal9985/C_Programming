#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int posCount = 0, negCount = 0, zeroCount = 0;

    int posArr[n], negArr[n], zeroArr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            posArr[posCount] = arr[i];
            posCount++;
        }
        else if(arr[i] < 0) {
            negArr[negCount] = arr[i];
            negCount++;
        }
        else {
            zeroArr[zeroCount] = arr[i];
            zeroCount++;
        }
    }

    printf("\nPositive numbers (%d): ", posCount);
    for(int i = 0; i < posCount; i++)
        printf("%d ", posArr[i]);

    printf("\nNegative numbers (%d): ", negCount);
    for(int i = 0; i < negCount; i++)
        printf("%d ", negArr[i]);

    printf("\nZero numbers (%d): ", zeroCount);
    for(int i = 0; i < zeroCount; i++)
        printf("%d ", zeroArr[i]);

    printf("\n");
    return 0;
}
