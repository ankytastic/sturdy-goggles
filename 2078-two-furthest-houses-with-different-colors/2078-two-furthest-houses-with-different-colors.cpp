class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int res=0;
        for(int i=0;i<n-1;i++){
            if(colors[0]!=colors[i]){
                res=max(res,i);
            }
            if(colors[i]!=colors[n-1]){
                res=max(res,n-1-i);
            }
        }
        return res;
    }
};