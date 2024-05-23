#ifndef __HASHMAP_H__
#define __HASHMAP_H__

#define MAX_NAME 20
#define MAX_LIST 30

typedef struct Person {
    int age;
    char name[MAX_NAME];
    struct Person *next;
} Person;

int hash(char name[MAX_NAME]);
void initBuckets(Person *buckets[MAX_LIST]);
void printBuckets(Person *buckets[MAX_LIST]);
void insertHash(Person *p, Person *buckets[MAX_LIST]);

#endif
