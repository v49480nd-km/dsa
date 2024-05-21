#include "hashmap.h"

int hash(char name[MAX_NAME]) {
    int key = 0;

    for (int i = 0; i < MAX_NAME; i++) {
        key += name[i] + name[i+1];
    }

    key = key * name[0];
    return (key % MAX_LIST);
}
