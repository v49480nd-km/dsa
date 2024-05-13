typedef struct Node
{
    int value;
    struct Node* next;
} node_t;

void appendLinkedList(node_t* tail, node_t* new_node); // add to end of list;
node_t* createNode(int value);
void insertLinkedList(node_t* node, node_t* new_node);
void popLinkedList(node_t* prev_node, node_t* tail); // remove last element
void printLinkedList(node_t* head);
void pushLinkedList(node_t** head, node_t* new_node); // add to front of list;
node_t* pullLinkedList(node_t* head); // remove first element
int searchLinkedList(node_t* head, int value);
