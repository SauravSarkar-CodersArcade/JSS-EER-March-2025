#include <stdio.h>
int hammingWeight(int); // Function Prototype
int main() {
    printf("The hamming weight of 11 is: %d\n", hammingWeight(11));
    printf("The hamming weight of 5 is: %d\n", hammingWeight(5));
    printf("The hamming weight of 0 is: %d\n", hammingWeight(0));
    return 0;
}
int hammingWeight(int n){ // n -> Parameter
    // Function Body Function Definition
    int count = 0;
    while (n > 0){
        if(n & 1) {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
