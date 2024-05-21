#include <stdio.h>
// #include <stdlib.h>

#include "hashmap.h"
// #include "linkedlist.h"

int main(void) {
    Person p1 = { 15, "john", NULL };
    Person p2 = { 72, "johnny", NULL };
    Person p3 = { 37, "benny", NULL };
    Person p4 = { 21, "bungle", NULL };
    Person p5 = { 44, "sarawithanh", NULL };
    Person *buckets[MAX_LIST];
    
    initBuckets(buckets);
    printBuckets(buckets);
    insertHash(&p1, buckets);
    insertHash(&p2, buckets);
    insertHash(&p3, buckets);
    insertHash(&p4, buckets);
    insertHash(&p5, buckets);
    printBuckets(buckets);

    return 0;
}
