#include<stdio.h>

void insertstartposition(int arr[], int n, int val);
void insertmiddleposition(int arr[], int n, int val);
void insertendposition(int arr[], int n, int val);
void insertspecificposition(int arr[], int n, int pos, int val);
int main(){
    int arr[100], n, pos, val, i,choise;
    printf("enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter elements in array:\n");
    for(i=0; i<n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("1.) At start position\n");
    printf("2.) At Middle Position\n");
    printf("3.) At End Position\n");
    printf("4.) At Specific Position\n");
    printf("5.) Exit\n");
    printf("\nEnter your choice:\n ");
    scanf("%d", &choise);
if(choise==4)
{
    printf("Enter the position to insert an element:\n ");
    scanf("%d", &pos);
}
    printf("Enter the value to insert: ");
    scanf("%d", &val);
    switch(choise)
    {
        case 1:insertstartposition(arr, n, val);
        break;
        case 2:insertmiddleposition(arr, n, val);
        break;
        case 3:insertendposition(arr, n, val);
        break;
        case 4:insertspecificposition(arr, n, pos, val);
        break;
        default:printf("Invalid Input");
        break;
    }
    printf("After Insertion array is: ");
    for(i=0; i<=n; i++)
    {
        printf("%d",  arr[i]);
    }
    return 0;
}

void insertstartposition(int arr[], int n, int val)
{
    int i;
    for(i=n-1; i>=0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = val;
    n++;
}
void insertmiddleposition(int arr[], int n, int val)
{
    int i, pos;
    pos = (n/2);
    for(i=n-1; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = val;
    n++;
}
void insertendposition(int arr[], int n, int val)
{
    arr[n] = val;
    n++;
}
void insertspecificposition(int arr[], int n, int pos, int val)
{
    int i;
    for(i=n-1; i>=pos-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = val;
    n++;
}
