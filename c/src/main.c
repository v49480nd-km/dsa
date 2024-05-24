#include <stdio.h>
//#include <stdlib.h>

#include "array.h"
// #include "hashmap.h"
// #include "linkedlist.h"

int main(void) {
    int ans;
    int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
    printArray(nums, ARR_SIZE(nums));
    ans = bSearch(nums, ARR_SIZE(nums), 111);
    printf("Found at index: %d\n", ans);

    return 0;
}
