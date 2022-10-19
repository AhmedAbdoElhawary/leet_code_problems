/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int> map;
        ListNode* node=head;
        for(int i=1;!map[node];i++){
            if(node==NULL)
                return NULL;
            map[node]=i;
            node=node->next;
            
        }
        return node;
    }
};