class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int m=maxi(candies);
        for(int i=0;i<n;i++)
        {
           candies[i]=candies[i]+extraCandies;
        }
        vector<bool> b;
        for(int i=0;i<n;i++)
        {
            if(candies[i]<m)
            {
                b.push_back(false);
            }
            else
            b.push_back(true);
        }
        return b;
    }
    int maxi(vector<int>& candies)
    {
        int m=candies[0];
        for(int i=1;i<candies.size();i++)
        {
            if(m<candies[i])m=candies[i];
        }
        return m;
    }
};