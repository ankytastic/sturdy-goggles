class NumArray {
public:
    vector<int> n;
    map<int,int> mpp;
    NumArray(vector<int>& nums) {
        n=nums;
        int curr=0;
        for(int i=0;i<nums.size();i++){
            curr+=nums[i];
            mpp[i]=curr;
            cout<<mpp[i]<<" "<<i<<endl;
        }
    }
    
    int sumRange(int left, int right) {
        cout<<mpp[right]<<" "<<right<<endl;
        cout<<mpp[left]<<" "<<left<<endl;
        if(left==0) return mpp[right];
        return mpp[right]-mpp[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

//  vector<int> n;
//     map<int,int> mpp;
//     NumArray(vector<int>& nums) {
//         n=nums;
//         int curr=0;
//         for(int i=0;i<nums.size();i++){
//             curr+=nums[i];
//             mpp[i]=curr;
//             // cout<<mpp[i]<<" "<<i<<endl;
//         }
//     }
    
//     int sumRange(int left, int right) {
//         return mpp[right]-mpp[left];
//     }


//  failed first approach debugging by printing mpp values while inserting and left, right and corresponding mpp values, adding edge case for if left =0
// changed to  return mpp[right]-mpp[left-1];