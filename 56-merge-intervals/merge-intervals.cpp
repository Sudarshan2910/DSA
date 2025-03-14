class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // vector<vector<int>> ans;
        // sort(intervals.begin(),intervals.end());
        // ans.push_back(intervals[0]);
        // for(int i=1;i<intervals.size();i++)
        // {
        //     vector<int> last=ans.back();
        //     if(last[1]>=intervals[i][0])
        //     {
        //         last[1]=max(last[1],intervals[i][1]);
        //         ans.pop_back();
        //         ans.push_back(last);
        //     }
        //     else
        //     {
        //         ans.push_back({intervals[i][0],intervals[i][1]});
        //     }
        // }
        // return ans;
        sort(intervals.begin(),intervals.end());
        int k=0;
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[k][1]>=intervals[i][0])
            {
                intervals[k][1]=max(intervals[k][1],intervals[i][1]);
            }
            else{
                k++;
                intervals[k]=intervals[i];
            }
        }
        intervals.resize(k+1);
        return intervals;
    }
};