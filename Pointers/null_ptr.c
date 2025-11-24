

//A pointer that points to nothing.

/*


You must NEVER dereference (*ptr) a NULL pointer.   A NULL pointer is a pointer that does not point to any valid memory location.
   It is often used to indicate that a pointer is not currently assigned to any object.


   int *ptr = NULL;
printf("%d", *ptr);   // ❌ ERROR (crash)


*/


#include <stdio.h>

int main() {
    int *ptr = NULL;   // pointer pointing to nothing

    printf("The value of ptr is: %p\n", ptr);

    if(ptr == NULL)
        printf("Pointer is NULL\n");

    return 0;
}
