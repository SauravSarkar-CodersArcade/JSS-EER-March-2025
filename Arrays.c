#include <stdio.h>
int main() {
    int arr1[] = {3,4,1,2,5,7,0};
    int arr2[5] = {1,2,3,4,5};
    int arr3[4] = {3};
    // Default values 3,0,0,0 -> 12 bytes wasted
    // Dynamic Memory Allocation
    // Traverse & display values (Index)
    int size = sizeof(arr1) / sizeof(arr1[0]);
    printf("First element: %d\n", arr1[0]);
    for (int i = 0; i < size; ++i) {
        printf("%d\t", *(arr1+i));
    }
    return 0;
}
