/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* again(struct ListNode* head,struct ListNode* move){
    if(move==NULL)
        return head;
    struct ListNode* t=move->next;
    move->next=head;
    
    head=again(move,t);
    return head;
}

struct ListNode* reverseList(struct ListNode* head){
return head==NULL?head:again(NULL,head);
}