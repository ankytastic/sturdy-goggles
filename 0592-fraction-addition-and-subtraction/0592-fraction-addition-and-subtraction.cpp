class Solution {
public:
    string fractionAddition(string e) {
        int num=0;
        int den=1;
        for(int i=0;i<e.size();){
            int curN=0;
            int curD=0;
            bool in=(e[i]=='-');
            if(e[i]=='+' || e[i]=='-'){
                i++;
            }
            while(i<e.size() && isdigit(e[i])){
                int v=e[i]-'0';
                curN=(curN*10)+v;
                i++;
            }
            i++;
            if(in==true){
                curN*=-1;
            }
            while(i<e.size() && isdigit(e[i])){
                int v=e[i]-'0';
                curD=(curD*10)+v;
                i++;
            }
            cout<<in<<endl;
            num=num*curD+curN*den;
            den=den*curD;
        }
        int GCD=abs(__gcd(num,den));
        num/=GCD;
        den/=GCD;
        return to_string(num)+"/"+to_string(den);
    }
};