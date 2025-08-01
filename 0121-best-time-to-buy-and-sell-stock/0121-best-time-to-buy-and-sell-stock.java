class Solution {
    public int maxProfit(int[] prices) {
        int p=0;
        int min_p=prices[0];
        for(int i=1;i<prices.length;i++){
            if(prices[i]<min_p){
                min_p=prices[i];
            }else{
                p=Math.max(p,prices[i]-min_p);
            }
        }
        return p;
    }
}