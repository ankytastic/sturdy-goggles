class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> s;
        vector<int> r(temperatures.size());
        for(int i=temperatures.size()-1;i>=0;i--){
            if(i==temperatures.size()-1){
                s.push({temperatures[i],i});
                r[i]=0;
            }else{
                while(!s.empty() && temperatures[i]>=s.top().first){
                    s.pop();
                }
                if(s.size()==0){
                    r[i]=0;
                }
                else{
                    r[i]=s.top().second-i;
                }
                s.push({temperatures[i],i});
            }
        }
        return r;
    }
};