#include <stdio.h>
int main(void) {
    int i = 10;
    float f = 2.5f;
    double d = 3.45;
    char c = 'a';
    // Checking the size of all the different data types
    // Integer -> %d or %i
    // Float -> %0.2f
    // By default -> All decimal values in any language are
    // of double data type
    printf("%i\n", i);
    printf("%0.3f\n", f);
    printf("%0.2lf\n", d);
    printf("%c\n", c);
    // Size -> sizeof()
    printf("Size Integer %llu bytes.\n", sizeof(i));
    printf("Size Character %zu bytes.\n", sizeof(c));
    printf("Size Float %d bytes.\n", sizeof(f));
    printf("Size Double %d bytes.\n", sizeof(d));
    return 0;
}
