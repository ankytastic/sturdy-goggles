class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        // Map<Character,Integer> m=new Map<Character,Integer>();
        // for(int i=0;i<magazine.length();i++){
        //     Map.put(magazine.charAt(i),)
        // }
        int[] freq = new int[26];
        for (char ch : magazine.toCharArray()) {
            freq[ch - 'a']++;
        }
        for (char ch : ransomNote.toCharArray()) {
            if(freq[ch - 'a']>0) freq[ch - 'a']--;
            else return false;
        }
        return true;
    }
}