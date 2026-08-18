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
    enum Weekday today = FRIDAY;

    printf("Today is day number: %d\n", today);

    if (today == FRIDAY) {
        printf("Weekend is coming!\n");
    }

    return 0;
}
