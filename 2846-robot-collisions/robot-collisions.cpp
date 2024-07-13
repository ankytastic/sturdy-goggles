class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n=positions.size();
        vector<int> id(n);
        for (int i = 0; i < n; i++) {
            id[i] = i;
        }
        auto compare = [&](int id1, int id2) {
            return positions[id1] <= positions[id2];
        };
        sort(id.begin(), id.end(), compare);
        stack<int> st;
        for(auto i:id){
            if(directions[i]=='R'){
                st.push(i);
            }else{
                while(!st.empty() && healths[i]>0){
                    if (healths[i] < healths[st.top()]) {
                        healths[i] = 0;
                        healths[st.top()] -= 1;
                    } else if (healths[i] > healths[st.top()]) {
                        healths[i] -= 1;
                        healths[st.top()] = 0;
                        st.pop();
                    } else {
                        healths[i] = 0;
                        healths[st.top()] = 0;
                        st.pop();
                    }
                }
            }
        }
        vector<int> ans;
        for(int i=0;i<healths.size();i++){
            if(healths[i]>0) ans.push_back(healths[i]);
        }
        return ans;
    }
};