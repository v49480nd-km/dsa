#include <stdio.h>

#include "dsa.h"

int main(void)
{
    node_t* head;
    int ans;
    node_t* first = createNode(15);
    node_t* third = createNode(14);
    node_t* second = createNode(16);

    head = first;
    first->next = third;
    third->next = second;

    printLinkedList(head);

    return 0;
}
