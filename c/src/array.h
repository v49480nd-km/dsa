#ifndef __ARRAY_H__
#define __ARRAY_H__

#define ARR_SIZE(arr) sizeof(arr) / sizeof(arr[0])

int bSearch(int arr[], const int SIZE, const int VALUE);
void printArray(int arr[], const int SIZE);
void reverseArray(int arr[],  const int SIZE);

#endif
