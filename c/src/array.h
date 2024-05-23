#ifndef __ARRAY_H__
#define __ARRAY_H__

#define ARR_SIZE(arr) sizeof(arr) / sizeof(arr[0])

void printArray(int arr[], const int SIZE);
void reverseArray(int arr[],  const int SIZE);

#endif
