class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> m;
public:
    TimeMap() {}

    void set(string key, string value, int timestamp) {
    m[key].push_back({timestamp, value});  
    }
    
    string get(string key, int timestamp) {
        if (m.find(key) == m.end()) {
            return "";
        }
        const vector<pair<int, string>>& values = m[key];
        auto it = upper_bound(values.begin(), values.end(), timestamp, 
        [](int target, const pair<int, string>& p) {
            return target < p.first;
        });
    if (it == values.begin()) {
        return "";
    }
    return prev(it)->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
