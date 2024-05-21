#include <stdio.h>
#include <stdlib.h>

#include "hashmap.h"

void initBuckets(Person *buckets[MAX_LIST]) {
    for (int i = 0; i <  MAX_LIST; i++) {
        buckets[i] = NULL;
    }
}

void printBuckets(Person *buckets[MAX_LIST]) {
    for (int i = 0; i < MAX_LIST; i++) {
        if (buckets[i] == NULL) {
            printf("%d => ---\n", i+1);
        } else {
            Person *temp = buckets[i];

            while (temp != NULL) {
                printf("%d => %s: %d\n", i+1, buckets[i]->name, buckets[i]->age);
                temp = temp->next;
            }
        }
    }
}

int hash(char name[MAX_NAME]) {
    int key = 0;

    for (int i = 0; i < MAX_NAME; i++) {
        key += name[i] + name[i+1];
    }

    key = key * name[0];
    return (key % MAX_LIST);
}

void insertHash(Person *p, Person *buckets[MAX_LIST]) {
    int key = hash(p->name);

    if (buckets[key] == NULL) {
        buckets[key] = p;
    } else {
        buckets[key]->next = p;
    }
}
