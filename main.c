#include <stdio.h>
#include <stdlib.h>

#include "dsa.h"

int
main(void)
{
    node_t *head = NULL;
    node_t *temp, *temp2, *temp3;

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

    temp3 = createNode(44);

    insertLinkedList(3, head, temp3);
    printLinkedList(head);

    free(head);
    free(temp);
    free(temp2);
    free(temp3);

    return 0;
}
