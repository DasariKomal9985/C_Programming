#include <stdio.h>

void Even_Odd(int arr[], int n);

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    Even_Odd(arr, n);
    return 0;
}

void Even_Odd(int arr[], int n) {
    int even_count = 0, odd_count = 0;

    int evearr[n], oddarr[n];  

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evearr[even_count] = arr[i];
            even_count++;
        } else {
            oddarr[odd_count] = arr[i];
            odd_count++;
        }
    }

    printf("Even elements are:\n");
    for(int i = 0; i < even_count; i++) {
        printf("%d ", evearr[i]);
    }

    printf("\nOdd elements are:\n");
    for(int i = 0; i < odd_count; i++) {
        printf("%d ", oddarr[i]);
    }

    printf("\nNumber of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);
}
