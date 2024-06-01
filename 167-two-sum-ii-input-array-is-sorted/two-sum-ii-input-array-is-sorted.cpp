class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        vector<int> a;
        int i=0;
        int j=n.size()-1;
        while(i<j){
            if(n[i]+n[j]>target){
                j--;
            }
            else if(n[i]+n[j]<target){
                i++;
            }
            else{
                a.push_back(i+1);
                a.push_back(j+1);
                break;
            }
        }
        return a;
    }
};