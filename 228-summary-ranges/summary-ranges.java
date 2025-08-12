class Solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> result = new ArrayList<>();
        if (nums.length == 0)
            return result;
        int s = nums[0];
        int e = nums[0];
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == e + 1) {
                e = nums[i];
            } else {
                if (s == e) {
                    result.add("" + s);
                } else {
                    result.add(s + "->" + e);
                }
                s = nums[i];
                e = nums[i];
            }
        }
        if (s == e) {
            result.add("" + s);
        } else {
            result.add(s + "->" + e);
        }
        return result;
    }
}