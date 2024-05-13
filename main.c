#include <stdio.h>
#include <stdlib.h>

#include "dsa.h"

int
main(void)
{
    node_t *head = NULL;
    node_t *temp, *temp2;

    for (int i = 0; i < 16; i++) {
        temp = createNode(i);
        pushLinkedList(&head, temp);
    }

    printLinkedList(head);

    head = pullLinkedList(head);

    printLinkedList(head);

    temp2 = createNode(99);

    appendLinkedList(head, temp2);
    printLinkedList(head);

    free(head);
    free(temp);
    free(temp2);

    return 0;
}
