class RecentCounter {
public:
    vector<int> v;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        v.push_back(t);
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            if((v[i]>=t-3000)&&(v[i]<=t))
            {
                ans+=1;
            }
        }
        return ans;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */