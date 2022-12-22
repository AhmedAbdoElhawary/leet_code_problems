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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* head=list1;
        ListNode* prevRemove=list1;
        ListNode* nextRemove=list1;

        for(int i=0;list1;i++){
            if(i+1 == a) prevRemove=list1;
            if(i-1 == b) break;
            
            if(i >= a && i <= b){
                ListNode* temp=list1->next;
                delete(list1);
                list1=temp;
            }else{
                list1=list1->next;
            }
        }
        
        prevRemove->next=list2;
        while(list2->next) list2=list2->next;
        list2->next=list1;
        
        return head;
    }
};