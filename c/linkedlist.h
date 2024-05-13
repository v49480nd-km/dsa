#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

typedef struct Node {
    int value;
    struct Node *next;
} node_t;

node_t *createNode(int value);
node_t *pullLinkedList(node_t *head); /* remove first element */
node_t *searchLinkedList(node_t *head, int value);
void appendLinkedList(node_t *head, node_t *new_node); /* add to end of list; */
void insertLinkedList(int node_value, node_t *head, node_t *new_node);
void popLinkedList(node_t *prev_node, node_t *tail); /* remove last element */
void printLinkedList(node_t *head);
void pushLinkedList(node_t **head, node_t *new_node); /* add to front of list; */

#endif
