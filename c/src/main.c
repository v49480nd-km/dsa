#include <stdio.h>
// #include <stdlib.h>

#include "hashmap.h"
// #include "linkedlist.h"

int
main(void)
{
    Person p1 = { 15, "john" };
    Person p2 = { 72, "johnny" };
    Person p3 = { 37, "benny" };
    Person p4 = { 21, "chaddington" };
    Person p5 = { 44, "sarawithanh" };
    Person people[5] = { p1, p2, p3, p4, p5 };

    for (int i = 0; i < 5; i++) {
        int cur_key = hash(people[i].name);
        printf("%s -> %d\n", people[i].name, cur_key);
    }

    return 0;
}
