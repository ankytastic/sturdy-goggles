class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1);
        stack<int> st;
        for (int i = 2*n - 1; i >= 0; i--) {
            int curr=nums[i % n];
            while (!st.empty() && st.top() <= curr) {
                st.pop();
            } if (!st.empty()) {
                result[i % n] = st.top();
            }
            st.push(nums[i % n]);
        }
        return result;
    }
};