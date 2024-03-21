class Solution {
public:

    int calcDays(int m1, int m2, int d1, int d2){
        int m[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        cout<<m1<<"-"<<d1<<" "<<m2<<"-"<<d2<<endl;
        if(m1==m2) return d2-d1+1;
        int ans=m[m1-1]-d1+1;
        for(int i=m1; i<m2-1; i++){
            ans += m[i];
        }
        ans+=d2;
        return ans;
    }
    int countDaysTogether(string aa, string la, string ab, string lb) {
        int amA, amB, dmA, dmB, adA, adB, ddA, ddB;
        amA=stoi(aa.substr(0,2));
        amB=stoi(ab.substr(0,2));
        dmA=stoi(la.substr(0,2));
        dmB=stoi(lb.substr(0,2));

        adA=stoi(aa.substr(3,2));
        adB=stoi(ab.substr(3,2));
        ddA=stoi(la.substr(3,2));
        ddB=stoi(lb.substr(3,2));

        if(dmA<amB || dmB<amA || (dmA==amB && ddA<adB) || (dmB==amA && ddB<adA)) 
            return 0;
        else{
            if(amA<amB || (amA==amB && adA<adB)){
                if(dmA<dmB || (dmA==dmB && ddA<ddB)) return calcDays(amB, dmA, adB, ddA);
                else return calcDays(amB, dmB, adB, ddB);
            }
            else{
                if(dmA<dmB || (dmA==dmB && ddA<ddB)) return calcDays(amA, dmA, adA, ddA);
                else return calcDays(amA, dmB, adA, ddB);
            }
        }
    }
};