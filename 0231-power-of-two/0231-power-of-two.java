class Solution {
    public boolean isPowerOfTwo(int x) {
        if (x <= 0) {
            return false;
        }
        
        return (x & (x - 1)) == 0;
    }
}
