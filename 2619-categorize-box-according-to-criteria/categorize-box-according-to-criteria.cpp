class Solution {
public:
    string categorizeBox(int l, int w, int h, int m) {
        bool b=false;
        bool he=false;
        long long v=1LL*l*w*h;
        if(l>=10000 || w>=10000 || h>=10000 || m>=10000 || v>=1000000000){
            b=true;
        }
        if(m>=100){
            he=true;
        }
        if(b && he) return "Both";
        else if(!b && !he) return "Neither";
        else if(b) return "Bulky";
        return "Heavy";
    }
};