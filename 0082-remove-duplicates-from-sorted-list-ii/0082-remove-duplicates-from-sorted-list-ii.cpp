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
    ListNode* solve(ListNode* head,bool check) {
        if(!head) return NULL;
        
        ListNode* nextN=head->next;
        bool equal=nextN && nextN->val == head->val;
        if(equal||nextN && check){
            head=solve(head->next,equal);
            
        }else if(check) head=NULL;
        else head->next=solve(head->next,false);

        return head;
    }
public:
    ListNode* deleteDuplicates(ListNode* head) {
        return solve(head,false);
    }
};