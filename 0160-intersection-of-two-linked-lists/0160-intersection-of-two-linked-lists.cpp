/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    unordered_set<ListNode*> hash;
public:
    void insert(ListNode *headA) {
        if(headA==NULL)
            return;
        hash.insert(headA);
        insert(headA->next);
    }
    ListNode *check(ListNode *headB) {
        if(headB==NULL)
            return NULL;
        if(hash.find(headB)!=hash.end())
            return headB;
        return check(headB->next);
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        insert(headA);
        return check(headB);
    }
};