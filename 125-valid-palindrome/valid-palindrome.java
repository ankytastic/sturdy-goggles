class Solution {
    public boolean isPalindrome(String s) {
        if (s.length() <= 1)
            return true;
        int i = 0;
        int j = s.length() - 1;
        while (i <= j) {
            if (Character.isLetterOrDigit(s.charAt(i)) && Character.isLetterOrDigit(s.charAt(j))) {
                if (Character.toLowerCase(s.charAt(i)) == Character.toLowerCase(s.charAt(j))) {
                    i++;
                    j--;
                } else {
                    return false;
                }
            } else {
                if (!Character.isLetterOrDigit(s.charAt(i))) {
                    i++;
                }
                if (!Character.isLetterOrDigit(s.charAt(j))) {
                    j--;
                }
            }
        }
        return true;
    }
}
