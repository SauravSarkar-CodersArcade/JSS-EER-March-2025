#include <stdio.h>
#include <string.h>
struct Person {
    // Max size of a pointer variable is 8 bytes
    char name[20]; // Static array of size 20
    int age;
    int salary;
};
int main() {
    struct Person p1;
    strcpy(p1.name, "Supraj");
// p1.name = "Supraj";
    p1.age = 32;
    p1.salary = 20000;
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Salary: %d\n", p1.salary);
    printf("Size of struct: %llu bytes ",
           sizeof(p1));
    return 0;
}
