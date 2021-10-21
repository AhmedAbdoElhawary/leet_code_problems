/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
  struct ListNode* t=head;
  for(;t!=NULL&&t->next!=NULL;){
    if(t->val==t->next->val)
      t->next=t->next->next;
    
    else t=t->next;
  }
    return head;
}