/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    
    
    if(list1==NULL) return list2;
    if(list2==NULL) return list1;
    
    if(list1->val<=list2->val){
        struct ListNode* temp=list1->next;
        list1->next=mergeTwoLists(temp,list2);
        
        return list1;
    }else{
        struct ListNode* temp=list2->next;
        list2->next= mergeTwoLists(list1,temp);
        
        return list2;
    }
}