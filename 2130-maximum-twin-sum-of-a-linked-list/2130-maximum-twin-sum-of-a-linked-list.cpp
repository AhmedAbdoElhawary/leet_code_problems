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
    int maximum=0;
    vector<int> vec;
    void rec(ListNode* head,int i) {
        if(!head){
            length=i;
            return;
        }  
        
        vec.push_back(head->val);
        
        rec(head->next,i+1);
        
        if(i >= length/2){
            int index=length-1-i;
            int temp=vec[index]+head->val;
            maximum =max(temp,maximum );
        }
        
    }
public:
    int pairSum(ListNode* head) {
        rec(head,0);
        return maximum ;
    }
};