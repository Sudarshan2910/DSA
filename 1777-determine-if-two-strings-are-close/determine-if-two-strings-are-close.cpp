class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())return false;
        map<char,int> m1,m2;
        for(int i=0;i<word1.length();i++)
        {
            m1[word1[i]]++;
        }
        for(int i=0;i<word2.length();i++)
        {
            m2[word2[i]]++;
        }
        map<char,int>::iterator it1,it2;
        it1=m1.begin();
        it2=m2.begin();
        for(;it1!=m1.end(),it2!=m2.end();it1++,it2++)
        {
            if(it1->first!=it2->first)return false;
        }
        it1=m1.begin();
        it2=m2.begin();
        vector<int> v1,v2;
        for(;it1!=m1.end();it1++)
        {
            v1.push_back(it1->second);
        }
        for(;it2!=m2.end();it2++)
        {
            v2.push_back(it2->second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i])return false;
        }
        return true;
    }
};