class Solution {
    public int majorityElement(int[] nums) {
        int m = nums[0];
        int cnt = 0;
        for (int i = 0; i < nums.length; i++) {
            if (cnt == 0) {
                cnt = 1;
                m = nums[i];
            } else if (nums[i] == m) {
                cnt++;
            } else {
                cnt--;
            }
        }
        return m;
    }
}