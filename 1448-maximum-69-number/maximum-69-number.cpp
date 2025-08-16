class Solution {
public:
    int maximum69Number (int num) {
        int c=log10(num);
        while(c>=0){
            int r=num/(int)pow(10,c);
            r=r%10;
            if(r==6){
                return num+(int)3*pow(10,c);
            }
            c--;
        }
        return num;
    }
};