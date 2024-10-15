class RecentCounter {
public:
    vector<int> v;
    int start;
    RecentCounter() {
        start=0;
    }
    
    int ping(int t) {
        v.push_back(t);
        for(int i=0;i<v.size();i++)
        {
            if(v[start]<t-3000)
            {
                start++;
            }
        }
        return v.size()-start;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */