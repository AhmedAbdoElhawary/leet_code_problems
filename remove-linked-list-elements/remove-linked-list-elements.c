/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* temp=head;
    for(;temp!=NULL&&temp->next!=NULL;){
        if(temp->next->val==val){
            temp->next=temp->next->next;
        }
        else
            temp=temp->next;
    }
    if(head!=NULL&&head->val==val)
        head=head->next;
    
    return head;
}