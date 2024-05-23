#include <stdio.h>

#include "array.h"

void printArray(int arr[], const int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        printf("%d, ", arr[i]);
    }

    printf("\n");
}

void reverseArray(int arr[], const int SIZE) {
    int start = 0, end = SIZE - 1;

    while (start < end) {
        arr[end] = arr[start] + arr[end];
        arr[start] = arr[end] - arr[start];
        arr[end] = arr[end] - arr[start];
        start++;
        end--;
    }
}