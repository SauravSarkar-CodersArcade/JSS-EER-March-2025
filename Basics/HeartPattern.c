#include <stdio.h>
int main() {
    printf("Heart:\n");
    for (int r = 0; r < 6; ++r) {
        for (int c = 0; c < 7; ++c) {
            if(r==0 && c%3 != 0 || r==1 && c%3 == 0 ||
            r-c == 2 || r+c==8){
                printf(" * ");
            } else{
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\nReverse Heart\n");
    for (int r = 0; r < 6; ++r) {
        for (int c = 0; c < 7; ++c) {
            if(r==5 && c%3 != 0 || r==4 && c%3 == 0 ||
               r-c == -3 || r+c==3){
                printf(" * ");
            } else{
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}
