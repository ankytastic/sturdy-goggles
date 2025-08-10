class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int l=nums.length;
        int i=0;
        int j=0;
        int sum=0;
        int minl=l+1;
        while(j<l){
            sum+=nums[j];
            while(sum>=target){
                minl=Math.min(minl,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return minl==l+1?0:minl;
    }
}