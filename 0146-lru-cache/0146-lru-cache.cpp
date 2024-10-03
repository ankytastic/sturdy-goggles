class LRUCache {
public:
    vector<pair<int, int>> lru;
    int c;
    LRUCache(int capacity) { c = capacity; }

    int get(int key) {
        if(lru.size()==0) return -1;
        for (int i = 0; i < lru.size(); i++) {
            if (lru[i].first == key) {
                int k = lru[i].second;
                lru.erase(lru.begin() + i);
                lru.push_back({key, k});
                return k;
            }
        }
        return -1;
    }

    void put(int key, int value) {
        for (int i = 0; i < lru.size(); i++) {
            if (lru[i].first == key) {
                lru.erase(lru.begin() + i);
                lru.push_back({key, value});
                return;
            }
        }
        if (lru.size() >= c) {
            lru.erase(lru.begin());
        }
        lru.push_back({key, value});
        return;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */