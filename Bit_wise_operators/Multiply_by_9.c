/*  Multiply a given number by 9 without using the multiplication operator. 


9 × num = (8 × num) + num
8 × num = num << 3 (because shifting left by 3 means multiplying by 2³ = 8)

Enter a number: 7
Result after multiplying 7 by 9 = 63



| Operation          | Binary                         | Decimal |
| ------------------ | ------------------------------ | ------- |
| `num`              | 00000111                       | 7       |
| `num << 3`         | 00111000                       | 56      |
| `(num << 3) + num` | 00111000 + 00000111 = 00111111 | 63      |


*/


#include <stdio.h>

int main() {
    unsigned int num, result;

    printf("Enter a number: ");
    scanf("%u", &num);

    // Multiply by 9 using bit shift
    result = (num << 3) + num;  // (num * 8) + num

    printf("Result after multiplying %u by 9 = %u\n", num, result);

    return 0;
}
