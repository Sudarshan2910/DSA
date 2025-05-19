class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int k=0;
        
        vector<int> arr;
        for(int i:nums)
        {
            if(i!=val){
                arr.push_back(i);
            }
        }
        nums=arr;
        k=arr.size();
        // cout<<k<<endl;
        return k;
    }
};