/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *ptr;
    ptr = head;
    if(head == NULL){
        return head;
    }
    while(ptr->next != NULL){
        printf("%d ", ptr->val);
        if(ptr->val == ptr->next->val){
            if(ptr->next->next == NULL){
                ptr->next = NULL;
                return head;
            }
            ptr->next = ptr->next->next;
        }
        ptr = ptr->next;
    }

    return head;

}
/*
Learnings
1. Always write LL diagram on paper before making question logic.
*/