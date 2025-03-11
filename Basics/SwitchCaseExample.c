#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter the character to check:\n");
    scanf("%c", &ch);
    if(!isalpha(ch)){
        printf("Not an alphabet..!!");
        return 0;
    }
    switch (tolower(ch)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
    }
    return 0;
}
