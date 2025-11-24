#include <stdio.h>

struct Student {
    int roll;
    float marks;
    char name[20];
};

int main() {
    struct Student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("\n--- Student Details ---\n");
    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);
    printf("Name: %s\n", s1.name);

    return 0;
}
