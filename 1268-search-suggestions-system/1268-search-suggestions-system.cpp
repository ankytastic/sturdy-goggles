class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string s) {
        vector<vector<string>> res;
        sort(products.begin(),products.end());
        int l=0,r=products.size()-1;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            while(l<=r && (products[l].size()<=i) || products[l][i]!=c) l+=1;
            while(l<=r && (products[l].size()<=i) || products[r][i]!=c) r-=1;
            int rem=r-l+1;
            vector<string> k;
            for(int j=0;j<min(3,rem);j++){
                k.push_back(products[l+j]);
            }
            res.push_back(k);
        }
        return res;
    }
};