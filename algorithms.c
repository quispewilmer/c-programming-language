#include <stdio.h>
void exchange(int *arr, int x, int y) {
    int temp;

    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void shellsort(int *arr, int n) {
    for (int i = n / 2; i > 0; i /= 2) {
        for (int j = 0; j + i <= n - 1; j++) {
            for (int k = j; k >= 0; k--) {
                if (arr[k + i] < arr[k]) {
                    exchange(arr, k + i, k);
                }
            }
        }
    }
}

void quicksort(int *arr, int start, int end) {
    int shortest = -1;
    int pivot = end;

    if (start >= end)
        return;

    for (int i = start; i < end; i++) {
        if (arr[i] < arr[pivot]) {
            exchange(arr, start + shortest + 1, i);
            shortest++;
        }
    }

    exchange(arr, start + shortest + 1, pivot);
    pivot = start + shortest + 1;

    quicksort(arr, start, pivot - 1);
    quicksort(arr, pivot + 1, end);
}