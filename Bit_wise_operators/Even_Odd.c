/* C program to check whether the given number is even or odd using bitwise operator 

Enter a number: 5
5 is ODD

Enter a number: 8
8 is EVEN


| Number | Binary   | LSB | Result |
| ------ | -------- | --- | ------ |
| 2      | 00000010 | 0   | Even   |
| 5      | 00000101 | 1   | Odd    |
| 12     | 00001100 | 0   | Even   |
| 7      | 00000111 | 1   | Odd    |

*/


#include <stdio.h>

int main() {
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    if (num & 1)
        printf("%u is ODD\n", num);
    else
        printf("%u is EVEN\n", num);

    return 0;
}
