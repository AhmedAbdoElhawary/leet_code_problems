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
string collect(ListNode* head,string x){
    if(head==NULL)
        return x;
    x+=head->val;
    return collect(head->next,x);
}
int getDecimalValue(ListNode* head){
    string x="";
    string str=collect(head,x);
    long long result=0;
    for(int i=str.size()-1,j=0;j<str.size()&&i>=0;j++,i--){
        int num=str[i];
        result+=num*pow(2,j);
    }
    return result;
}
};