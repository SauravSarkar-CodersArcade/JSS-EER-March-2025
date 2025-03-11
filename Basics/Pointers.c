#include <stdio.h>
int main() {
    int a = 20;
    // Address of 'a' using address operator:
    // Base address, Hexadecimal address
    printf("Address using & operator:\n");
    printf("%p\n", &a);
    printf("%x\n", &a);
    int * ptr = &a;
    // Address of 'a' using pointer/reference
    printf("Address using pointer:\n");
    printf("%p\n", ptr);
    printf("%x\n", ptr);
    // reference -> value : De-referencing
    printf("Value of 'a' using pointer: %d\n", *ptr);
    printf("The pointer address: %p\n", &ptr);
    int ** dPtr = &ptr;
    printf("Address of pointer: %p\n", dPtr);
    printf("value of a using dPtr: %d\n", **dPtr);
    printf("%d", *(&a));

    return 0;
}
