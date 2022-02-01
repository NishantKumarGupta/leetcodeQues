class MinStack {
public:
    vector<int> vec;
    MinStack() {
        vec.clear();
    }
    
    void push(int val) {
        vec.push_back(val);
    }
    
    void pop() {
        if(vec.empty())
            return;
        vec.pop_back();
    }
    
    int top() {
        return vec.back();
    }
    
    int getMin() {
        return *min_element(vec.begin(),vec.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */