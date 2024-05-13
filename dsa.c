#include <stdio.h>
#include <stdlib.h>

#include "dsa.h"

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

node_t*
searchLinkedList(node_t *head, int value)
{
    node_t *temp = head;

    while (temp != NULL) {
        if (temp->value == value)
            break;

        temp = temp->next;
    }

    return temp;
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
insertLinkedList(int node_value, node_t *head, node_t *new_node)
{
    node_t *node = searchLinkedList(head, node_value);

    if (node == NULL)
        exit(0);

    new_node->next = node->next;
    node->next = new_node;
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
