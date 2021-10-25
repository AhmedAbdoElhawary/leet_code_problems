/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int fin=0;
struct ListNode* new=NULL;
struct ListNode* check(struct ListNode* head,int size){
    if(head==NULL){
        fin=size--;
        return NULL;
    }
      
    check(head->next,size+1);

        if(fin%2==0){
        if(size==(fin/2))
            new=head;
    }
       
    else{
         if(size==(fin/2)+1)
            new=head;
    }

       
    return new;

}
    
    struct ListNode* middleNode(struct ListNode* head){
        
    return check(head,1);
}