/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {

    if( head == NULL || head -> next == NULL ){
        return head;
    }
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    struct ListNode *next= head -> next;

    while ( curr != NULL ){
        next = curr-> next;
        curr->next = prev;      //o atual aponta para trás

        prev = curr;
        curr = next;
    }
    return prev;        //prev é a nova cabeça da lista
}