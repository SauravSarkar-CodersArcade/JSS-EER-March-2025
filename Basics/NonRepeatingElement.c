#include <stdio.h>
// JSSATE September 2024 - Accenture/CapGemini
int main() {
    int arr[] = {1,2,3,4,3,2,1};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result = result ^ arr[i];
    }
    printf("The non-repeating element is: %d.", result);


    return 0;
}
