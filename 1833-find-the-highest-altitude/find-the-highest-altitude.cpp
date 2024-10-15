class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> v;
        v.push_back(0);
        int maxi=0;
        for(int i=0;i<gain.size();i++)
        {
            v.push_back(v[i]+gain[i]);
            maxi=max(maxi,v[i+1]);
        }
        return maxi;
    }
};