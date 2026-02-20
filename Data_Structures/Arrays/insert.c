#include <stdio.h>
int main(){
    int arr[100], n, pos, val, i;
    printf("Enter number of elements in array:");
    scanf("%d" , &n);
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d" , &arr[i]);
    }
    printf("Enter the position to insert an element: ");
    scanf("%d" , &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &val);
    for(i=n-1; i>=pos-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = val;
    n++;
    printf("Array after inserction: ");
    for(i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
}