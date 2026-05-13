// https://leetcode.com/problems/min-stack/

#include<bits/stdc++.h>
#include<stack>
#include<string>
using namespace std;

class MinStack {
stack<int>st;
stack<int>MinSt;
public:
    MinStack() {}
    
    void push(int val) {
        st.push(val);

        if(MinSt.empty() || val<= MinSt.top()){
            MinSt.push(val);
        }
    }
    
    void pop() {
        int x = st.top();
        st.pop();

        if(x == MinSt.top()){
            MinSt.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return MinSt.top();
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