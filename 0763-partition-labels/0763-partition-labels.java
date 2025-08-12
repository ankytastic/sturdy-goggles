class Solution {
    public List<Integer> partitionLabels(String s) {
        List<Integer> result = new ArrayList<>();
        int[] l_index=new int[26];
        for(int i=0;i<s.length();i++){
            l_index[s.charAt(i)-'a']=i;
        }  
        int st=0;
        int e=0;      
        for(int i=0;i<s.length();i++){
            e=Math.max(e,l_index[s.charAt(i)-'a']);
            if(i==e){
                result.add(e-st+1);
                st=e+1;
            }
        }
        return result;
    }
}