class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> store;
        int prod=1;
        for(int i=0;i<nums.size();i++)
        {
            prod*=nums[i];
        }
        if(prod!=0){
            for(int i=0;i<nums.size();i++)
        {   
            store.push_back(prod/nums[i]);
        }
        return store;
        }
        else{
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)
                store.push_back(0);
                else{
                    int p=1;
                    for(int j=0;j<nums.size();j++)
                    {
                        if(j==i)continue;
                        p*=nums[j];
                    }
                    store.push_back(p);
                }
            }
            return store;
        }
        
    }
};