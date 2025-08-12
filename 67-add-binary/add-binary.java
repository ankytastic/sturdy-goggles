class Solution {
    public String addBinary(String a, String b) {
        int ae=a.length()-1;
        int be=b.length()-1;
        String result="";
        int carry=0;
        while(ae>=0 || be>=0 || carry>0){
            int sum=carry;
            if(ae>=0){
                sum+=a.charAt(ae) - '0';
                ae--;
            }
            if(be>=0){
                sum+=b.charAt(be) - '0';
                be--;
            }
            carry=sum/2;
            result=(sum%2)+result;
        }
        return result;
    }
}