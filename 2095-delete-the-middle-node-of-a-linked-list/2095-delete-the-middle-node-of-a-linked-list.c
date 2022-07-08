/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int numOfMiddleNode=0;

struct ListNode* getMiddleNode(struct ListNode* head,int nodeNum){
    if(head==NULL||head->next==NULL){
        numOfMiddleNode=(nodeNum/2)+1;
        if(nodeNum==numOfMiddleNode) return NULL;
        return head;
    }
     head->next=getMiddleNode(head->next,nodeNum+1);
    if(nodeNum==numOfMiddleNode) head=head->next;
    
    return head;
}


struct ListNode* deleteMiddle(struct ListNode* head){
   return getMiddleNode(head,1);
}