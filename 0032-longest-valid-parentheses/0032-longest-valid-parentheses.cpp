class Solution {
public:
    int longestValidParentheses(string s) {
        stack <int> stack;
        int result=0;
        stack.push(-1);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
              stack.push(i);
            }else{
                stack.pop();
                if(stack.empty()){
                    stack.push(i);
                }else{
                    int t= i - stack.top();
                    result=result>t?result:t;

                }
            }
        }
        return result;
    }
};