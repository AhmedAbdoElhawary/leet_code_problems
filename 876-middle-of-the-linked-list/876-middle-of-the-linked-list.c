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
        int num=(nodeNum/2)+1;
        numOfMiddleNode=num;
        return head;
    }
    struct ListNode* node=getMiddleNode(head->next,nodeNum+1);
    if(nodeNum==numOfMiddleNode)
       return head;
    return node;
}

struct ListNode* middleNode(struct ListNode* head){
   return getMiddleNode(head,1);
}