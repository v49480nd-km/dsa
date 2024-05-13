#ifndef __DSA_H__
#define __DSA_H__

#include <stdio.h>
#include <stdlib.h>

#include "dsa.h"

int
searchLinkedList(node_t *head, int value)
{
    node_t *temp = head;
    int ans = 0, idx = 0;

    while (temp != NULL) {
        if (temp->value == value) {
            ans = idx;
            break;
        }

        temp = temp->next;
        idx++;
    }

    free(temp);

    return ans;
}

node_t*
createNode(int value)
{
    node_t *node = (node_t*)malloc(sizeof(node_t));
    node->value = value;
    node->next = NULL;

    return node;
}

node_t*
pullLinkedList(node_t *head)
{
    head = head->next;

    return head;
}

void
appendLinkedList(node_t *head, node_t *new_node)
{
    node_t *temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = new_node;
}

void
printLinkedList(node_t *head)
{
    node_t *temp = head;

    while (temp != NULL) {
        printf("%d - ", temp->value);

        temp = temp->next;
    }

    putc('\n', stdout);
    free(temp);
}

void
pushLinkedList(node_t **head, node_t *new_node)
{
    new_node->next = *head;
    *head = new_node;
}

#endif
