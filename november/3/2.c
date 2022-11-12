// 12 Nov 2022 - Day 3 

/*
Learnings- 
1. Make habit of using Linked list, it should not take much time to create and traverse with.
2. Look at input output format before jumping into logic building.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *head, *new, *ptr;
    struct ListNode *ptr2, *ptr1;
    ptr1 = l1;
    ptr2 = l2;
    new = (struct ListNode*)malloc(sizeof(struct ListNode));
    head = new;
    int sum = ptr1->val + ptr2->val; //first node, works because of non-empty LL
    new->val = sum%10;
    new->next = NULL;
    int carry;
    if(sum>9){
        carry =1;
    }
    else{
        carry =0;
    }
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
    ptr = head;

    while(ptr1 != NULL && ptr2 != NULL){
        sum = ptr1->val + ptr2->val + carry;

        if(sum>9){
            new = (struct ListNode*)malloc(sizeof(struct ListNode));
            new->val = (sum%10);
            new->next = NULL;
            ptr->next = new;
            ptr = ptr->next;
            carry = 1;
        }
        else{
            new = (struct ListNode*)malloc(sizeof(struct ListNode));
            new->val = (sum%10);
            new->next = NULL;
            ptr->next = new;
            ptr = ptr->next;
            carry = 0;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    //check for no of digits not equal in the two LL
    if(ptr1 != ptr2){
        //above loop stopped because either of the ptrs is NULL
        //if both are not NULL, it means both had different no of nodes
    
        while(ptr1 != NULL){
            sum = ptr1->val + 0 +carry;
            if(sum>9){
                new=(struct ListNode*)malloc(sizeof(struct ListNode));
                new->val = sum%10; //%10 for sum == 10
                new->next = NULL;
                ptr->next = new;
                ptr=ptr->next;
                carry = 1;
            }
            else{
                new=(struct ListNode*)malloc(sizeof(struct ListNode));
                new->val = sum%10 ;
                new->next = NULL;
                ptr->next = new;
                ptr=ptr->next;
                carry = 0;
            }
            ptr1=ptr1->next;
        }
    
    
        while(ptr2 != NULL){
            sum = ptr2->val + 0 + carry;
            if(sum>9){
                new=(struct ListNode*)malloc(sizeof(struct ListNode));
                new->val = sum%10 ;
                new->next = NULL;
                ptr->next = new;
                ptr=ptr->next;
                carry = 1;
            }
            else{
                new=(struct ListNode*)malloc(sizeof(struct ListNode));
                new->val = sum%10 ;
                new->next = NULL;
                ptr->next = new;
                ptr=ptr->next;
                carry = 0;
            }
            ptr2=ptr2->next;
        }
        
    }
    if(carry){
        new=(struct ListNode*)malloc(sizeof(struct ListNode));
        new->val = carry;
        new->next = NULL;
        ptr->next = new;
        ptr=ptr->next;
    }

    return head;
}