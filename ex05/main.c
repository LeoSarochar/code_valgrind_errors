#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    *ptr = 9;
    printf("I love the number %d\n", *ptr);

    free(ptr);
    *ptr = 20;

    int *arr = malloc(5 * sizeof(int));
    for (int i = 0; i <= 5; i++) {
        arr[i] = i;
    }
    free(arr);
    return 0;
}
