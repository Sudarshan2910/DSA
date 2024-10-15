class Solution {
public:
    string reverseWords(string s) {
        vector<string> t;
        stringstream str(s);
        string word;
        while(str>>word)
        {
            t.push_back(word);
        }
        string ans;
        for(int i=t.size()-1;i>=0;i--)
        {
            ans.append(t[i] + " ");
        }
        ans.pop_back();
        return ans;
    }
};