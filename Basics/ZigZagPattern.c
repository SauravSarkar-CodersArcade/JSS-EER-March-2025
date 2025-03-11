#include <stdio.h>
void zigZag1(int col){
    for (int r = 1; r <=3 ; ++r) {
        for (int c = 1; c <=col ; ++c) {
            if((r==1 && c%4==3) ||
               (r==2 && c%2==0) ||
               (r==3 && c%4==1)){
                printf("* ");
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
void zigZag2(int col){
    for (int r = 1; r <=3 ; ++r) {
        for (int c = 1; c <=col ; ++c) {
            if((r+c) % 4==0 ||
               (r==2 && c%4==0) ){
                printf("* ");
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main() {
    zigZag1(9);
    zigZag2(17);
    return 0;
}
