class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        sort(intervals.begin(),intervals.end());
        v.push_back(intervals[0]);

        for(int i=1;i<intervals.size();i++)
        {
            vector<int> last=v.back();
            if(last[1]>=intervals[i][0]){
                last[1]=max(last[1],intervals[i][1]);
                v.pop_back();
                v.push_back(last);
            }
            else{
                v.push_back(intervals[i]);
            }
        }
        return v;
    }
};