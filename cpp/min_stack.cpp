class MinStack {
public:
    // We can guarantee that the stack moves backwards or forwards by a single step
    vector<int> v; // Stores stack
    vector<int> min; // Stores stack minimum history

    MinStack() {
        min.push_back(INT_MAX); // For when v is empty
    }
    
    void push(int x) {
        // Add to stack
        v.push_back(x);
        // Update or extend minimum of stack
        if (x <= min.back()) {
            min.push_back(x);
        } else {
            min.push_back(min.back());
        }
    }
    
    void pop() {
        v.pop_back();
        min.pop_back();
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        return min.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */