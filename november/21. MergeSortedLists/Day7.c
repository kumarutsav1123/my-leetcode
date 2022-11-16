/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *ptr1, *ptr2, *ptr, *head;
    ptr1 = list1;
    ptr2 = list2;

    //dealing with empty linked list cases
    if(ptr1 == NULL && ptr2 == NULL){
        return NULL;
    }
    if(ptr1 == NULL){
        return ptr2;
    }
    if(ptr2 == NULL){
        return ptr1;
    } 

    //first node, further nodes will be added to this LL only
    if(ptr1->val < ptr2->val){
        ptr = list1;
        ptr1 = ptr1->next;
    }
    else{
        ptr = list2;
        ptr2 = ptr2->next;
    }
    head = ptr;

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->val < ptr2->val){
            ptr->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            ptr->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr = ptr->next;
    }
    while(ptr1 != NULL){
        ptr->next = ptr1;
        ptr1 = ptr1->next;
        ptr = ptr->next;
    }
    while(ptr2 != NULL){
        ptr->next = ptr2;
        ptr2 = ptr2->next;
        ptr = ptr->next;
    }

    return head;

}

/*
Learnings-
1. If solving a problem is not working by one approach, give yourself a rest, solve a different question, brush up the imvolved topic and then come back to the same question with a newer appreach.
2. Leetcode was having problem running malloc in Clang but the question could have been solved using the same given lists, without creating any new LL.
3. You did well identifying the boundary conditions.
*/