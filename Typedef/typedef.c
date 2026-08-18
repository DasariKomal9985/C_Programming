#include <stdio.h>

// Creating alias 'Student' for struct student
typedef struct {
    int roll;
    float marks;
} Student;

int main() {
    Student s1;    // using typedef name

    s1.roll = 101;
    s1.marks = 88.5;

    printf("Roll Number: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
