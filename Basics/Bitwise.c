#include <stdio.h>

int main() {
    for (int i = 1; i < 11; ++i) {
        for (int j = 1; j < 11; ++j) {
            printf("%dx%d=%d\t", i,j, i*j); // int x int = int -> %d x %d = %d
        }
        printf("\n");
    }
    return 0;
}
