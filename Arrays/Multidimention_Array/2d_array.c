#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j;

    // Input 3x3 matrix
    printf("Enter 9 numbers for 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print matrix
    printf("\nMatrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Sum of each row
    printf("\nRow Sums:\n");
    for(i = 0; i < 3; i++) {
        int sum = 0;
        for(j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
        printf("Row %d Sum = %d\n", i, sum);
    }

    return 0;
}
