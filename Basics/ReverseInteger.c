#include <stdio.h>
int reverseInteger(int n){
    int ans = 0;
    while (n != 0){
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    return ans;
}
int main() {
    printf("Reverse of 123 is %d\n", reverseInteger(123));
    printf("Reverse of 320 is %d\n", reverseInteger(320));
    return 0;
}
