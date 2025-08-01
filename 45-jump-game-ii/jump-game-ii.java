class Solution {
    public int jump(int[] nums) {
        if(nums.length==1) return 0;
        int j=0;
        int currEnd=0;
        int far=0;
        for(int i=0;i<nums.length;i++){
            far=Math.max(far,i+nums[i]);
            if(i==currEnd){
                j+=1;
                currEnd=far;
            }
            if(currEnd==nums.length-1) break;
        }
        return j;
    }
}