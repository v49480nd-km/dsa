#include <stdio.h>

#include "dsa.h"

void printLinkedList(node_t* head)
{
    node_t* temp = head;

    while (temp != NULL)
    {
        printf("%d - ", temp->value);
        temp = temp->next;
    }

    putc('\n', stdout);
    free(temp);
}

int searchLinkedList(node_t* head, int value)
{
    node_t* temp = head;
    int ans = 0, idx = 0;

    while (temp != NULL)
    {
        if (temp->value == value)
        {
            ans = idx;
            break;
        }

        temp = temp->next;
        idx++;
    }

    //free(temp);

    return ans;
}
