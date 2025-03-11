#include <stdio.h>
#include <stdlib.h>
int main() {
//    // Block Size = 4 bytes
//    // 3 blocks = 12 bytes is wasted.
//    // During runtime-> How much storage is needed?
//    // Based on that data should be given
//    // Dynamic memory Allocation
//    int arr[5] = {1,2}; // 1 2 0 0 0
//    for (int i = 0; i <5 ; ++i) {
//        printf("%d ", arr[i]);
//    }
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int * ptr;
    // Because malloc() returns void, we typecast
    // ptr = (int*) malloc(n * sizeof(int));
    ptr = (int*) calloc(n, sizeof(int));
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &ptr[i]);
    }
    printf("The array elements are:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", ptr[i]);
    }
    printf("\n Enter the new size of the array:\n");
    scanf("%d", &n);
    realloc(ptr, n* sizeof(int));
    printf("Enter the new array elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &ptr[i]);
    }
    printf("The new array elements are:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}
