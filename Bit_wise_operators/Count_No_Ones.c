/*  Program to count the number of ones in an integer using bitwise operators. 

Enter a number: 5
Number of 1s in 5: 2

Enter a number: 15
Number of 1s in 15: 4
*/

#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%u", &num);

    unsigned int temp = num; // keep original for display

    while (num > 0) {
        if (num & 1)  // check if last bit is 1
            count++;
        num = num >> 1;  // shift right by 1 bit
    }

    printf("Number of 1s in %u: %d\n", temp, count);

    return 0;
}


/*for(p=7;p>=0;p--)
    {
	if(a&0x01<<p)
	    c++;
    }*/
