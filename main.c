#include <stdio.h>

#include "dsa.h"

int main(void)
{
    node_t* head;
    int ans;
    node_t first, second, third, fourth, fifth, new_third;

    head = &first;
    first.value = 23;
    second.value = 47;
    third.value = 89;
    fourth.value = 21;
    fifth.value = 18;
    new_third.value = 99;

    first.next = &second;
    second.next = &new_third;
    third.next = &fourth;
    fourth.next = &fifth;
    fifth.next = NULL;
    new_third.next = &third;

    printLinkedList(head);
    ans = searchLinkedList(head, 47);
    printf("%d\n", ans);

    return 0;
}
