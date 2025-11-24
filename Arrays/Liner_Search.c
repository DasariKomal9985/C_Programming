#include <stdio.h>

int main() {
    int n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to search: \n");
    scanf("%d", &key);

    int found = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Found at index %d\n", i);
            found = 1;
        }
    }

    if(!found)
        printf("Not Found\n");

    return 0;
}
