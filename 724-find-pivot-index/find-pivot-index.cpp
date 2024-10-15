class Solution {
public:
    int pivotIndex(vector<int>& nums) {       
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                int sl=0;
                int sr=summation(nums,1,nums.size()-1);
                if(sl==sr)return 0;
            }
            else if(i==nums.size()-1)
            {
                int sr=0;
                int sl=summation(nums,0,nums.size()-2);
                if(sl==sr)return nums.size()-1;
            }
            else
            {
                int sl=summation(nums,0,i-1);
                int sr=summation(nums,i+1,nums.size()-1);
                if(sl==sr)return i;
            }
        }
        return -1;
    }
    int summation(vector<int>& n,int s,int e)
    {
        int sum=0;
        for(int i=s;i<=e;i++)
        {
            sum+=n[i];
        }
        return sum;
    }
};