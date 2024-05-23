// #include <stdio.h>
// #include <stdlib.h>

#include "array.h"
// #include "hashmap.h"
// #include "linkedlist.h"

int main(void) {
    int array[6] = { 1, 2, 3, 4, 5, 6 };

    printArray(array, ARR_SIZE(array));
    reverseArray(array, ARR_SIZE(array));
    printArray(array, ARR_SIZE(array));

    return 0;
}