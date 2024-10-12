class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int i=0;
        int j=0;
        int n1=word1.length();
        int n2=word2.length();
        while(i+j<n1+n2)
        {
            if(i<n1)
            {
                s.append(word1,i,1);
                i++;
            }
            if(j<n2)
            {
                s.append(word2,j,1);
                j++;
            }
        }
        return s;
    }
};