#include <stdio.h>

#include "array.h"

int bSearch(int arr[], const int SIZE, const int VALUE) {
    int start = 0, end = SIZE - 1, mid;
    while (start <= end) {
        mid = (end + start) / 2;
        if (arr[mid] == VALUE) {
            return mid;
        } else if (arr[mid] > VALUE) {
            end = mid - 1;
        } else if (arr[mid] < VALUE) {
            start = mid + 1;
        }
    }
    return -1;
}

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
