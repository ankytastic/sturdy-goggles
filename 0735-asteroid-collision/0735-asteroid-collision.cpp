class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (auto a : asteroids) {
            if (a > 0) {
                st.push(a);
            } else {
                bool f=true;
                while (!st.empty() && st.top() > 0) {
                    if (st.top() < abs(a)) {
                        st.pop();
                    } else if (st.top() == abs(a)) {
                        st.pop();
                        f=false;
                        break;
                    } else {
                        break;
                    }
                }
                if ((st.empty() || st.top() < 0) && f) {
                    st.push(a);
                }
            }
        }
        
        // Collect the remaining asteroids from the stack.
        vector<int> result;
        while (!st.empty()) {
            result.insert(result.begin(), st.top());
            st.pop();
        }
        
        return result;
    }
};