#include <stdio.h>

#include "dsa.h"

int main(void)
{
    node_t* head = NULL;
    node_t* temp;

    for (int i = 0; i < 16; i++)
    {
        temp = createNode(i);
        pushLinkedList(&head, temp);
    }

    printLinkedList(head);
    head = pullLinkedList(head);
    printLinkedList(head);

    return 0;
}
