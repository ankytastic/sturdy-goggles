class Solution {
    int findMaxSum(int[] nums, int n) {
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            int take=nums[i];
            if(i>1) take+=prev2;
            int notTake=prev;
            int curi=Math.max(take,notTake);
            prev2=prev;
            prev=curi;
        }
        return prev;
    }
    public int rob(int[] nums) {
        int n=nums.length;
        if (n == 0) return 0;
        if (n == 1) return nums[0];        
        if (n == 2) return Math.max(nums[0],nums[1]);        
        int[] nums1 = new int[n - 1];
        int[] nums2 = new int[n - 1];
        for (int i = 0; i < n - 1; i++) {
            nums1[i] = nums[i];
        }
        for (int i = 1; i < n; i++) {
            nums2[i - 1] = nums[i];
        }
        return Math.max(findMaxSum(nums1,n-1),findMaxSum(nums2,n-1));
    }
}