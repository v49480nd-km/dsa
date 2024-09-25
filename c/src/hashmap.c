// hello world
// how are you?

#include <stdio.h>
#include <stdlib.h>

#include "hashmap.h"

void initBuckets(Person *buckets[]) {
    for (int i = 0; i <  MAX_LIST; i++) {
        buckets[i] = NULL;
    }
}

void printBuckets(Person *buckets[]) {
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

void pushPerson(Person **head, Person *p) {
    p->next = *head;
}

void insertHash(Person *p, Person *buckets[]) {
    int key = hash(p->name);
    Person **temp = &buckets[key];

    if (buckets[key] != NULL) {
        pushPerson(temp, p);
    } else {
        buckets[key] = p;
    }
}
