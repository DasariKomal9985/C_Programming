#include <stdio.h>

enum Weekday {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    enum Weekday today;

    today = WEDNESDAY;

    printf("Today is: %d\n", today);

    if (today == WEDNESDAY) {
        printf("Mid-week day!\n");
    }

    return 0;
}
