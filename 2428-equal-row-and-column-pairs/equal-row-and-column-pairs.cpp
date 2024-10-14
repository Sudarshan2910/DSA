class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<vector<int>> b= grid;
        transpose(grid,b);
        int count=0;
        map<vector<int>,int> m;
        for(int i=0;i<grid[0].size();i++)
        {
            m[grid[i]]++;
        }
        for(int i=0;i<grid[0].size();i++)
        {
            if(m.find(b[i])!=m.end())
            {
                count+=m[b[i]];
            }
        }
        return count;
    
    }
    void transpose(vector<vector<int>>& a,vector<vector<int>>& b)
    {
        int i,j;
        for(i=0;i<a[0].size();i++)
        {
            for(j=0;j<a[0].size();j++)
            {
                b[i][j]=a[j][i];
            }
        }
    }
};