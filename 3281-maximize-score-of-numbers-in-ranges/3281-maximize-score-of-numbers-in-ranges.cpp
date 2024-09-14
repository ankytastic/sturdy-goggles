class Solution {
public:
    int check(vector<int> a,int d,int mid){
        for(int ind=1;ind<a.size();ind++){
            if(a[ind]-a[ind-1]>=mid){
                continue;
            }
            else{
                if(a[ind]+d-a[ind-1]<mid) return false;
                a[ind]=a[ind-1]+mid; 
            }
        }
        return true;
    }
    int maxPossibleScore(vector<int>& a, int d) {
        long long l=0,r=INT_MAX;
        long long ans;
        sort(a.begin(),a.end());
        while(l<=r){
            int mid=l+((r-l)/2);
            if(check(a,d,mid)){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};