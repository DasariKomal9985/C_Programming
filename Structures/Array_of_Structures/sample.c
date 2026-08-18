#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s[3] = {
        {1, 85.5},
        {2, 90.0},
        {3, 78.2}
    };

    for(int i = 0; i < 3; i++) {
        printf("Roll: %d  Marks: %.2f\n", s[i].roll, s[i].marks);
    }

    return 0;
}
