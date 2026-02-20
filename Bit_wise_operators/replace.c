/*  Replace the nth bit with mth bit from left side. 

x = 10101010 (170)
y = 10100111 (167)
n = 3
p = 6


Step 1️⃣ — Get rightmost n bits of y
y = 10100111
n = 3
(1 << n) - 1 = 00000111
y & 00000111 = 00000111
→ right_n_bits = 111

Step 2️⃣ — Make mask for n bits at position p
((1 << n) - 1) << (p + 1 - n)
= 00000111 << (6 + 1 - 3)
= 00000111 << 4
= 01110000


So we’ll target bits 4–6 in x.

Step 3️⃣ — Clear those bits in x
x = 10101010
~mask = 10001111
x & ~mask = 10001010

Step 4️⃣ — Insert y bits at those positions
(right_n_bits << (p + 1 - n)) = 00000111 << 4 = 01110000
x | (01110000) = 10111010 ✅


✅ Final result = 10111010 (186 decimal)



Enter x (decimal): 170
Enter y (decimal): 167
Enter position p: 6
Enter number of bits n: 3

x = 10101010 (binary)
y = 10100111 (binary)
setbits n = 3, p = 6 gives x = 10111010 (binary)


*/



#include <stdio.h>

// Function to print a number in binary (8-bit representation)
void printBinary(unsigned int num) {
    for (int i = 7; i >= 0; i--)
        printf("%d", (num >> i) & 1);
}

// Function to set bits
unsigned int setbits(unsigned int x, int p, int n, unsigned int y) {
    // Step 1: Extract rightmost n bits of y
    unsigned int right_n_bits = y & ((1 << n) - 1);

    // Step 2: Create mask for n bits at position p in x
    unsigned int mask = ((1 << n) - 1) << (p + 1 - n);

    // Step 3: Clear those n bits in x
    x = x & ~mask;

    // Step 4: Shift y bits to correct position and insert
    x = x | (right_n_bits << (p + 1 - n));

    return x;
}

int main() {
    unsigned int x, y;
    int p, n;

    printf("Enter x (decimal): ");
    scanf("%u", &x);
    printf("Enter y (decimal): ");
    scanf("%u", &y);
    printf("Enter position p: ");
    scanf("%d", &p);
    printf("Enter number of bits n: ");
    scanf("%d", &n);

    unsigned int result = setbits(x, p, n, y);

    printf("\nx = ");
    printBinary(x);
    printf(" (binary)");

    printf("\ny = ");
    printBinary(y);
    printf(" (binary)");

    printf("\nsetbits n = %d, p = %d gives x = ", n, p);
    printBinary(result);
    printf(" (binary)\n");

    return 0;
}




/*  #include<stdio.h>
int main()
{
    int x,y,p,n,i,a;
    printf("enter x,y values:");
    scanf("%d%d",&x,&y);
    printf("enter setbit and position:");
    scanf("%d%d",&n,&p);
    a=p;
    for(i=p;i>a-n;i--)
    {
	x=x&(~(0x01<<i));
    }
    for(i=n;i<32;i++)
	y=y&(~(0x01<<i));
	y=y<<(p-n)+1;
	x=x|y;
    for(i=7;i>=0;i--)
    {
	if(x&0x01<<i)
	    printf("1");
	    else printf("0");
    }
}
*/