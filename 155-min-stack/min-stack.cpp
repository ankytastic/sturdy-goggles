class MinStack {
public:
    stack<int> st;
    map<int, int> mpp;
    MinStack() {}

    void push(int val) {
        st.push(val);
        mpp[val] += 1;
    }

    void pop() {
        int val=st.top();
        st.pop();
        mpp[val] -= 1;
    }

    int top() { return st.top(); }

    int getMin() {
        auto it = mpp.begin();
        while(it->second==0) it++;
        return it->first;
    }
};
