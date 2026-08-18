#include <stdio.h>

struct Employee {
    char name[20];
    int salary;
};

int main() {
    struct Employee e = {"Rahul", 50000};
    struct Employee *ptr = &e;

    printf("Name: %s\nSalary: %d\n", ptr->name, ptr->salary);

    return 0;
}
