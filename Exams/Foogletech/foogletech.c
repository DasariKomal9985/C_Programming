/*

Write a C program to rotate an array by K positions (right rotation) using dynamic memory allocation

number = 5
known = 2
array = [1 2 3 4 5]


Output will be:
4 5 1 2 3



| i | arr[i] | (i+2) % 5 | result index |
| - | ------ | --------- | ------------ |
| 0 | 1      | 2         | result[2]    |
| 1 | 2      | 3         | result[3]    |
| 2 | 3      | 4         | result[4]    |
| 3 | 4      | 0         | result[0]    |
| 4 | 5      | 1         | result[1]    |


index:   0 1 2 3 4
value:   4 5 1 2 3

*/



#include<stdio.h>
#include<stdlib.h>
int* rotatorynumber(int number,int known,int* arr);
int main()
{
int number,known,i;
scanf("%d %d",&number,&known);
int arr[number];
for(i=0;i<number;i++)
{
scanf("%d",&arr[i]);
}
int* result = rotatorynumber(number,known,arr);
for(i=0;i<number;i++)
{
printf("%d",result[i]);
}
free(result);
return 0;
}


int* rotatorynumber(int number,int known,int* arr)
{
int i;
int* result = (int*)malloc(number * sizeof(int));
known = known % number;//storing Quotient value
for(i=0;i<number;i++)
{
result[ (i+known) % number] = arr[i];
}
return result;
}