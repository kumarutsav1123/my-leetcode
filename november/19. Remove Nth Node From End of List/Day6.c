/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *ptr;
    ptr = head;
    //calcualting last node
    int lastNode = 0;
    while(ptr != NULL){
        lastNode++;
        ptr = ptr->next;
    }
    //deleting
    ptr = head;
    int delNode = lastNode - n;
    int currNode = 0;
    //hardcoded for single element
    if(lastNode==1){
        return NULL;
    }
    if(delNode==0){
        //don't forget deleting the first node condition
        head = head->next;
        return head;
    }
    while(ptr != NULL){
        currNode++;
        printf("%d ", ptr->val);

        if(currNode == delNode){
            ptr->next = ptr->next->next;
        }
        else{
        ptr = ptr->next;
        }

    }
    return head;
}

/*
Learnings-
1. Abb to linked list dhang se practice karle bhai!!
2. Keep in mind Node deletion conditions
*/