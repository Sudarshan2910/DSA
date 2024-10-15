class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1){

        }
        else{
            vector<int> v;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)v.push_back(nums[i]);
            }
            int n=nums.size()-v.size();
            for(int i=0;i<n;i++)
            {
                v.push_back(0);
            }
            nums=v;
        }
    }
};