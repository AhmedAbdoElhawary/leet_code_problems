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
    ListNode* solve(ListNode* head,int sum) {
        if(!head) return NULL;
        int val=head->val;
        if(head->val != 0 && head->next->val == 0){
            head->val+=sum;
            head->next=solve(head->next,0);
        }else{
            ListNode* temp=head;
            int par=val==0?0:sum+val;
            head=solve(head->next,par);
            delete(temp);
        }
        return head;
    }
public:
    ListNode* mergeNodes(ListNode* head) {
        return solve(head,0);
    }
};