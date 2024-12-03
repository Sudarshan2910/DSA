class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=nums[0];
        int i=0;
        while(i<nums.size())
        {
            sum+=nums[i];
            maxi=max(sum,maxi);
            if(sum<0)
            {
                sum=0;
            }
            i++;
        }
        return maxi;               
    }
};