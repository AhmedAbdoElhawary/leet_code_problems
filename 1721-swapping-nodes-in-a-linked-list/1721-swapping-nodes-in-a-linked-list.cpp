/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    int length=0;
    ListNode* frontNode=NULL;
    ListNode* backNode=NULL;
    
    void rec(ListNode* head, int k,int i) {
        if(!head){
            length=i;
            return ;
        }
        
        if(k == i+1) frontNode=head;
        rec(head->next,k,i+1);
        if(length-k == i) backNode=head;
        
    }
public:
    ListNode* swapNodes(ListNode* head, int k) {
        rec(head,k,0);
        if(backNode && frontNode){
            int temp=frontNode->val;
            frontNode->val=backNode->val;
            backNode->val=temp; 
        }
        return head;
    }
};