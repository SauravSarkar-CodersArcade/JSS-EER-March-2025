#include <stdio.h>
int main() {
    int x;
    printf("Enter the number:\n");
    scanf("%d", &x);
    if(x % 2 == 0){
        if(x % 4 == 0){
            printf("%d is even & div by 4.",x);
        } else{
            printf("%d is even & not div by 4.",x);
        }
    } else{
        if(x % 3 == 0){
            printf("%d is odd & div by 3.",x);
        }else{
            printf("%d is odd & not div by 3.",x);
        }
    }
    return 0;
}
