class Solution {
public:
    typedef unsigned long long ll;
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==2 || n==1) return 1;
        ll t0=0;
        ll t1=1;
        ll t2=1;
        while(n-2>0){
            ll temp=t0+t1+t2;
            t0=t1;
            t1=t2;
            t2=temp;
            cout<<temp<<" "<<t0<<" "<<t1<<" "<<t2<<endl;
            n--;
        }
        return t2;
    }
};