class Solution {
public:
    int countDigits(int num) {
        int r=num;
        vector<int> dig;
        while(r>0){
            int s=r%10;
            dig.push_back(s);
            r=r/10;
        }
        int count=0;
        for(int i=0;i<dig.size();i++){
            if(num%dig[i]==0) count++;
        }
        return count;
    }
};