/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int totalSize=0;
int rec(struct ListNode* head, int n,int size){
    if(head==NULL){
        totalSize=size;
        return n;
    }
    int num=rec(head->next,n,size+1);
    if(n==totalSize) return 5;
    
    --num;
    if(num==-1){
        struct ListNode* temp= head->next;
        head->next=temp->next;
        free(temp);
    }
    return num;
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(head->next==NULL) return n==1?NULL:head;

    int v=rec(head,n,0);
    if(v == 5){
        struct ListNode* h=head;
        head=h->next;
        free(h);
    }
    return head;
}