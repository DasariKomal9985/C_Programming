/* Check whether the 20th bit of an integer is set or not. If it is, print "ON"; otherwise, print "OFF". 

| Bit Position | Meaning | Decimal Value | Binary      |
| ------------ | ------- | ------------- | ----------- |
| Bit 0        | LSB     | 1             | 0000...0001 |
| Bit 1        |         | 2             | 0000...0010 |
| Bit 20       |         | 1,048,576     | 0001...0000 |


💡 Because 1048576 = 1 << 20,
binary: 0001 0000 0000 0000 0000 0000*/


#include <stdio.h>

int main() {
    unsigned int num;
    int bit = 20;   // we are checking the 20th bit

    printf("Enter a 32-bit number: ");
    scanf("%u", &num);

    if (num & (1 << bit))
        printf("The 20th bit is ON (1)\n");
    else
        printf("The 20th bit is OFF (0)\n");

    return 0;
}





/*(1 << bit) → shifts 1 left by 20 positions
→ creates a bitmask where only the 20th bit is 1
→ binary mask = 0001 0000 0000 0000 0000 0000

num & mask → performs bitwise AND
→ if the 20th bit in num is set, result ≠ 0 → ON
→ otherwise result = 0 → OFF*/






/*    if(a&0x00100000)
	printf("bit is ON\n");
    else
	printf("bit is OFF\n");*/
