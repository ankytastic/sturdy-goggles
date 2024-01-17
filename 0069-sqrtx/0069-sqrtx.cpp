class Solution {
public:
    int mySqrt(int x) {
        int ans=INT_MIN;
        int low=0;
        int high=x;
        while(low<=high){
            long long mid=low+((high-low)/2);
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid>x){
                high=mid-1;
            }
            else{
                low=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};