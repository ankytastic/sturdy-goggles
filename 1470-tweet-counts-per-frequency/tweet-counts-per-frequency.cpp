class TweetCounts {
public:
    map<string,vector<int>> mpp;
    TweetCounts() {
        mpp.clear();
    }
    
    void recordTweet(string tweetName, int time) {
        mpp[tweetName].push_back(time);
    }
    
    vector<int> getTweetCountsPerFrequency(string freq, string tweetName, int startTime, int endTime) {
        int time;
        if(freq=="minute"){
            time=60;
        }
        else if(freq=="hour"){
            time=3600;
        }
        else{
            time=3600*24;
        }
        vector<int> ans(((endTime-startTime)/(time))+1,0);
        for(auto a:mpp[tweetName]) if(a>=startTime && a<=endTime) ans[(a-startTime)/time]++;
        return ans;
    }
};

/**
 * Your TweetCounts object will be instantiated and called as such:
 * TweetCounts* obj = new TweetCounts();
 * obj->recordTweet(tweetName,time);
 * vector<int> param_2 = obj->getTweetCountsPerFrequency(freq,tweetName,startTime,endTime);
 */