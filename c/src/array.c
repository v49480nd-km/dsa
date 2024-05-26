#include <stdio.h>

#include "array.h"

// SEARCHING
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

int jumpSearch(int arr[], const int VALUE) {
    int jump = 3;
    int low = 0, high = jump;

    while (arr[low] <= VALUE) {
        if (VALUE > arr[high]) {
            jump++;
            low += jump;
            high += jump;
        } 

        if (arr[low] > VALUE) {
            break;
        }

        for (int i = low; i < high; i++) {
            if (arr[i] == VALUE) {
                return i;
            }
        }
    }
    return -1;
}

int linearSearch(int arr[], const int SIZE, const int VALUE) {
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == VALUE) {
            return i;
        }
    }
    return -1;
}

int sentinelSearch(int arr[], const int SIZE, const int VALUE) {
    int i = 0, last = arr[SIZE - 1];
    arr[SIZE - 1] = VALUE;

    while (arr[i] != VALUE) {
        i++;
    }
    arr[SIZE - 1] = last;

    if ((i < SIZE - 1) || arr[SIZE - 1] == VALUE) {
        return i;
    }
    return -1;
}

// SORTING
void bubbleSort(int arr[], const int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void selectSort(int arr[], const int SIZE) {
    int min;
    for (int i = 0; i < SIZE - 1; i++) {
        min = i;
        for (int j = i; j < SIZE; j++) {
            if (arr[j] < arr[min]) { // lol ray j
                min = j;
            }
        }

        swap(&arr[min], &arr[i]);
    }
}

// RANDOM
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

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
