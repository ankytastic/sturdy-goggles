class Solution {
public:
    int rob(vector<int>& nums) {
        int prev=0;
        int prev2=0;
        for(int x:nums){
            int cur=max(prev,prev2+x);
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
};


 
// DP approach
// firstly an arraylist is created for storing and traversing intermediate results across various indices
// and then a dynamic programming function is created
// with i initialised with n-1, so we start the function from the end of the array
// if i==0 which means if we reach the start of the vector we can return nums[i]
// if i<0 we return 0
// if a value exists at arraylist[i], return it
// p=nums[i]+function(i-2,nums,res)
// np=function(i-1,nums,res)
// set res[i] to the max of (p,np)
// return res.get[i]
    // int f(int i,vector<int>& num, vector<int>& re){
    //     if(i==0) return num[i];
    //     if(i<0) return 0;
    //     if(re[i]!=-1) return re[i];
    //     int p=num[i]+f(i-2,num,re);
    //     int np=f(i-1,num,re);
    //     re[i]=max(p,np);
    //     return re[i];
    // }
    // int rob(vector<int>& nums) {
    //     int n=nums.size();
    //     vector<int> res(n,-1);
    //     return f(n-1,nums,res);
    // }