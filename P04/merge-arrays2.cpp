#include <iostream>
#include "print_array.h"

int* merge_arrays(const int a[], int na, const int b[], int nb) {
    int* merged = new int[na + nb];
    int i = 0, j = 0, k = 0;

    while (i < na && j < nb) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    while (i < na) {
        merged[k++] = a[i++];
    }

    while (j < nb) {
        merged[k++] = b[j++];
    }

    return merged;
}

int main() {
    const int a[] = {1, 3, 5};
    const int b[] = {2, 4, 6};
    int* merged = merge_arrays(a, 3, b, 3);

    for (int i = 0; i < 6; i++) {
        std::cout << merged[i] << " ";
    }

    delete[] merged;

    return 0;
}