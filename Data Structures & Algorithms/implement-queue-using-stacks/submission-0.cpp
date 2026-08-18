class MyQueue {
    stack<int> in_st;
    stack<int> out_st;
public:
    MyQueue() {

    }
    
    void push(int x) {
        in_st.push(x);
    }
    
    int pop() {
        if(out_st.empty()){
            while(!in_st.empty()){
                int i = in_st.top();
                out_st.push(i);
                in_st.pop();
            }
        }
        int topp = out_st.top();
        out_st.pop();
        return topp;
    }
    
    int peek() {
        if(out_st.empty()){
            while(!in_st.empty()){
                int i = in_st.top();
                out_st.push(i);
                in_st.pop();
            }
        }
        int topp = out_st.top();
        return topp;
    }
    
    bool empty() {
        return (in_st.size() + out_st.size()) == 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */