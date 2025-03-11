#include <stdio.h>
int main() {
    int x = 21;
    int y = 15;
    printf("Before: x=%d, y=%d\n", x,y);
    // Using XOR
    //    x = x ^ y;
    //    y = x ^ y;
    //    x = x ^ y;
    // Using arithmetic operators
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After: x=%d, y=%d\n", x,y);
    return 0;
}
