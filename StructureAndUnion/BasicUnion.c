#include <stdio.h>
#include <string.h>
union Person {
    // Max size of a pointer variable is 8 bytes
    char name[20]; // Static array of size 20
    int age;
    int salary;
};
int main() {
    union Person p1;
    strcpy(p1.name, "Supraj");
    printf("Name: %s\n", p1.name);
// p1.name = "Supraj";
    p1.age = 32;
    printf("Age: %d\n", p1.age);
    p1.salary = 20000;
    printf("Salary: %d\n", p1.salary);
    printf("Size of union: %llu bytes ",
           sizeof(p1));
    return 0;
}
