#include <stdio.h>

struct Address {
    int house_no;
    char city[20];
};

struct Person {
    char name[20];
    struct Address addr; // nested structure
};

int main() {
    struct Person p = {"Komal", {101, "Hyderabad"}};

    printf("Name: %s\nCity: %s\nHouse No: %d\n",
           p.name, p.addr.city, p.addr.house_no);

    return 0;
}
