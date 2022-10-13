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
public:
    queue<int> numbers;
    bool rec(ListNode* head) {
        if(head==NULL) return true;
        numbers.push(head->val);
        bool check=rec(head->next);
        int firstNum=numbers.front();
        numbers.pop();
        
        return check&&firstNum==head->val; 
    }
    
    bool isPalindrome(ListNode* head) {
        return rec(head);
    }
};