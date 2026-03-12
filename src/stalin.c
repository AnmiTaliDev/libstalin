#include "stalin.h"

size_t stalin_sort(int *arr, size_t len) {
    if (len == 0) return 0;

    size_t survivors = 1;
    for (size_t i = 1; i < len; i++) {
        if (arr[i] >= arr[survivors - 1]) {
            arr[survivors++] = arr[i];
        }
    }
    return survivors;
}
