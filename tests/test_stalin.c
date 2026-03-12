#include <stdio.h>
#include <assert.h>
#include "stalin.h"

static void print_arr(int *arr, size_t len) {
    printf("[");
    for (size_t i = 0; i < len; i++) {
        printf("%d%s", arr[i], i + 1 < len ? ", " : "");
    }
    printf("]\n");
}

int main(void) {
    int arr[] = {1, 2, 10, 3, 5, 8, 15};
    size_t len = sizeof(arr) / sizeof(arr[0]);

    printf("before: ");
    print_arr(arr, len);

    len = stalin_sort(arr, len);

    printf("after:  ");
    print_arr(arr, len);

    assert(len == 4);
    assert(arr[0] == 1 && arr[1] == 2 && arr[2] == 10 && arr[3] == 15);

    int empty[] = {};
    assert(stalin_sort(empty, 0) == 0);

    int single[] = {42};
    assert(stalin_sort(single, 1) == 1);

    printf("all tests passed\n");
    return 0;
}
