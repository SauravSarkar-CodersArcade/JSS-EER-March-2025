#include <stdio.h>
void swapTwoNumbers(int * a, int * b){
    printf("Swap Function:Before swap: a=%d, b=%d\n",*a,*b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Swap Function:After swap: a=%d, b=%d\n",*a,*b);
}
int main() {
    int a = 10;
    int b = 20;
    printf("Main Function: Before swap: a=%d, b=%d\n",a,b);
    swapTwoNumbers(&a,&b);
    printf("Main Function: After swap: a=%d, b=%d\n",a,b);
    return 0;
}
