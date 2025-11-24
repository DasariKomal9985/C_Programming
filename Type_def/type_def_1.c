#include <stdio.h>

typedef struct {
    char name[20];
    int age;
} Person;

int main() {
    Person p = {"Komal", 22};
    printf("Name = %s, Age = %d\n", p.name, p.age);
    return 0;
}
