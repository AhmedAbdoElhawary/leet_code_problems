/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseRecursion(struct ListNode* head,struct ListNode* next_node){
    if(next_node==NULL)
        return head;
    struct ListNode* temp=next_node->next;
    next_node->next=head;
    return reverseRecursion(next_node,temp);
}
struct ListNode* reverseList(struct ListNode* head){
    return reverseRecursion(NULL,head);
}