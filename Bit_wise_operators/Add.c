/*  Addition without using + operator 



🧠 Concept Behind It

To understand this, recall 2’s complement representation —
that’s how negative numbers are stored in binary.

➤ 2’s Complement Rule
For any number x:
  -x = ~x + 1


Now rearrange this equation:

~x = -x - 1

➤ Substitute into the formula

We know that:

a + b = a - (~b) - 1


Replace ~b with (-b - 1):

a - (~b) - 1
= a - (-b - 1) - 1
= a + b + 1 - 1
= a + b ✅

*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Addition is: %d\n", (a - (~b) - 1));

    return 0;
}
