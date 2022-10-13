/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* rec(struct ListNode* head,struct ListNode* headOfEven,struct ListNode* lastOfEven){
    struct ListNode* nextEven=head->next;
    if(nextEven==NULL){
        head->next=headOfEven;
        return head;
    }
    
    struct ListNode* nextOdd=nextEven->next;

    nextEven->next=NULL;

    if(headOfEven!=NULL){
        lastOfEven->next=nextEven;
        lastOfEven=nextEven;
    }else{
        headOfEven= nextEven; 
        lastOfEven= nextEven; 
    }
    
    if(nextOdd==NULL){
        head->next=headOfEven;
        return head;
    }
    
    head->next=nextOdd;
    
    head->next=rec(head->next,headOfEven,lastOfEven);
    return head;

}

struct ListNode* oddEvenList(struct ListNode* head){
    bool exit= head==NULL||head->next==NULL||head->next->next==NULL;
    return exit? head : rec(head,NULL,NULL);
}