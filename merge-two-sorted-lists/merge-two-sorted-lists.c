/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* add(struct ListNode* l1, struct ListNode* l2){
    if(l1==NULL||l2==NULL)
        return NULL;
    if(l1->val < l2->val){
        if(l1->next!=NULL&&l1->next->val >= l2->val){
            struct ListNode* temp=l1;
            l1=l1->next;
            temp->next=l2;
        }else{
            if(l1->next==NULL){
              struct ListNode* temp=l1;
                l1=l1->next;
                temp->next=l2;
            }else
                l1=l1->next;
        }
            
        
    }else{
         if(l2->next!=NULL&&l2->next->val > l1->val){
            struct ListNode* temp=l2;
            l2=l2->next;
            temp->next=l1;
         }
        else{
            if(l2->next==NULL){
              struct ListNode* temp=l2;
                l2=l2->next;
                temp->next=l1;
            }else
                l2=l2->next;
        }
        
        }
    
    return add(l1,l2);
    
}

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    
    if(l1==NULL||l2==NULL)
        return l1==NULL?l2:l1;
    
    struct ListNode* head=l1->val  <  l2->val ?l1 :l2 ;
    add(l1,l2);
    return head;
}