/* Dynamic Memory Allocation in C

Because malloc is a general-purpose memory allocator.

It does not know in advance what type of data you want to store.

So it returns a void pointer:

void* = generic pointer
meaning "I point to some memory, type not decided yet"

Then you decide the type.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    if(ptr==NULL)
        printf("Memory allocation failed");
    else
        printf("Memory allocated successfully");
}