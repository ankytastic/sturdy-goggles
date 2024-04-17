class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> re;
        int r=candies[0];
        for(int k:candies){
            r=max(k,r);
        }
        for(int k:candies){
            if(k+extraCandies>=r)
                re.push_back(true);
            else
                re.push_back(false);
        }
        return re;
    }
};