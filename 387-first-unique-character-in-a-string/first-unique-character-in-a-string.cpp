class Solution {
public:
    int firstUniqChar(string s) {
        // unordered_map<char,int> m;
        // for(int i=0;i<s.length();i++)
        // {
        //     m[s[i]]++;
        // }
        // int ind=-1;
        // for(int i=0;i<s.length();i++)
        // {
        //     if(m[s[i]]==1)
        //     {
        //         ind=i;
        //         break;
        //     }
        // }
        // return ind;
        vector<int> f(26,0);
        for(int i=0;i<s.length();i++)
        {
            f[s[i]-'a']+=1;
        }
        for(int i=0;i<s.length();i++)
        {
            if(f[s[i]-'a']==1)
            {
                return i;
            }
        }
        return -1;
    }
};