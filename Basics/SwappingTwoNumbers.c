#include <stdio.h>
void swapTwoNumbers(int a, int b){
    printf("Swap:Before swap: a=%d, b=%d\n",a,b);
    int temp = a;
    a = b;
    b = temp;
    printf("Swap:After swap: a=%d, b=%d\n",a,b);
}
int main() {
    int a = 10;
    int b = 20;
    printf("Main: Before swap: a=%d, b=%d\n",a,b);
    swapTwoNumbers(a,b);
    printf("Main: After swap: a=%d, b=%d\n",a,b);
    return 0;
}
