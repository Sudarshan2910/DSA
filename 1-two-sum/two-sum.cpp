class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int a=0,b=0;
        for(int i=0;i<nums.size();i++)
        {   
            if(!m.empty())
            {
                if(m.find(nums[i])!=m.end()){
                    a=m[nums[i]];
                    b=i;
                    break;
                }
            }
            m[target-nums[i]]=i;
        }
        return {a,b};
    }
};