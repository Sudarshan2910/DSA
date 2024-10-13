class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m1,m2;
        for(int i=0;i<nums1.size();i++)
        {
            m1[nums1[i]];
        }
        for(int i=0;i<nums2.size();i++)
        {
            m2[nums2[i]];
        }
        vector<vector<int>> answer;
        vector<int> v1,v2;
        unordered_map<int,int>::iterator itr =m1.begin();
        for(;itr!=m1.end();itr++)
        {
            
            if(m2.find(itr->first)!=m2.end())
            {

            }
            else v1.push_back(itr->first);
        }
        unordered_map<int,int>::iterator it =m2.begin();
        for(;it!=m2.end();it++)
        {
            if(m1.find(it->first)!=m1.end())
            {

            }
            else v2.push_back(it->first);
        }
        answer.push_back(v1);
        answer.push_back(v2);
        return answer;
    }
};