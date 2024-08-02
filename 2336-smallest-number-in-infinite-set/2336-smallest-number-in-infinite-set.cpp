class SmallestInfiniteSet {
public:
    int res;
    set<int> s;
    priority_queue<int,vector<int>,greater<int>> qu;
    SmallestInfiniteSet() {
        res=1;
    }
    
    int popSmallest() {
        int r;
        if(!qu.empty()){
            r=qu.top();
            qu.pop();
            s.erase(res);
        }else{
            r=res;
            res+=1;
        }
        return r;
    }
    
    void addBack(int num) {
        if(num>=res || s.find(num)!=s.end()){
            return;
        }
        s.insert(num);
        qu.push(num);
    }
};