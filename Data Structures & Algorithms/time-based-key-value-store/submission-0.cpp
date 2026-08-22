class TimeMap {
    unordered_map<string, vector<pair<int , string>>> store;
public:
    TimeMap() { }
    
    void set(string key, string value, int timestamp) {
        store[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        string res = "";  // if no such pair exists for key we will return this
        int l = 0, r = store[key].size() - 1;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(store[key][mid].first <= timestamp){
                res = store[key][mid].second;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return res;
    }
};
