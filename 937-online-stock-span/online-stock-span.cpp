class StockSpanner {
public:
    int ind=-1;
    stack<pair<int,int>> s;
    StockSpanner() {
        ind=-1;
        s.empty();
    }
    int next(int price) {
        ind+=1;
        while(!s.empty() && s.top().first<=price){
            s.pop();
        }
        int ans=ind-(s.empty()?-1:s.top().second);
        s.push({price,ind});
        return ans;
    }
};