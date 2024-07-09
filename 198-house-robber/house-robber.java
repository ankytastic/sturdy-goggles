class Solution {
    public int f(int i,int[] nums,ArrayList<Integer> res){
        if(i==0) return nums[i];
        if(i<0) return 0;
        if(res.get(i)!=-1) return res.get(i);
        int p=nums[i]+f(i-2,nums,res);
        int np=f(i-1,nums,res);
        res.set(i,Math.max(p,np));
        return res.get(i);
    }
    public int rob(int[] nums) {
        int n=nums.length;
        ArrayList<Integer> res = new ArrayList<Integer>(Collections.nCopies(n, -1));
        return f(n-1,nums,res); 
    }
}