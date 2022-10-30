class MyQueue {
    private Stack<Integer> stack1=new Stack<>();
    private Stack<Integer> stack2=new Stack<>();
    public MyQueue() {
        
    }
    
    public void push(int x) {
        if(stack1.empty()){
            stack1.push(x);
            return;
        }
         
        while(!stack1.isEmpty()){
            int t=stack1.pop();
            stack2.push(t);
        }
        stack1.push(x);
        while(!stack2.isEmpty()){
            int t=stack2.pop();
            stack1.push(t);
        }
    }
    
    public int pop() {
        return stack1.pop();
    }
    
    public int peek() {
        return stack1.peek();

    }
    
    public boolean empty() {
        return stack1.empty();
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */