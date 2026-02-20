/*  Enter a number: 5
Enter bit position (0-31): 1

Choose operation:
1. Set bit
2. Clear bit
3. Toggle bit
4. Left shift
5. Right shift
Enter your choice: 4
Enter number of positions to shift left: 2
After left shifting by 2: 20
*/


#include <stdio.h>

int main() {
    unsigned int num;
    int bit, choice, shift;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter bit position (0-31): ");
    scanf("%d", &bit);

    printf("\nChoose operation:\n");
    printf("1. Set bit\n");
    printf("2. Clear bit\n");
    printf("3. Toggle bit\n");
    printf("4. Left shift\n");
    printf("5. Right shift\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Set bit
            num = num | (1 << bit);
            printf("After setting bit %d: %u\n", bit, num);
            break;

        case 2: // Clear bit
            num = num & (~(1 << bit));
            printf("After clearing bit %d: %u\n", bit, num);
            break;

        case 3: // Toggle bit
            num = num ^ (1 << bit);
            printf("After toggling bit %d: %u\n", bit, num);
            break;

        case 4: // Left shift
            printf("Enter number of positions to shift left: ");
            scanf("%d", &shift);
            num = num << shift;
            printf("After left shifting by %d: %u\n", shift, num);
            break;

        case 5: // Right shift
            printf("Enter number of positions to shift right: ");
            scanf("%d", &shift);
            num = num >> shift;
            printf("After right shifting by %d: %u\n", shift, num);
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
