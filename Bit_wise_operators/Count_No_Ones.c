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
