#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

    arr = (int*) calloc(5, sizeof(int)); // all values = 0

    printf("Array using calloc (initially zero):\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // modify values
    for(i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    printf("\nModified values:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    free(arr); // free memory

    // reuse pointer
    arr = (int*) malloc(5 * sizeof(int));

    printf("\n\nNew array using malloc:\n");
    for(i = 0; i < 5; i++) {
        arr[i] = (i+1) * 10;
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
