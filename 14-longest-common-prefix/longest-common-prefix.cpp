class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<int> v(strs[0].length(), 1);
        for (int i = 1; i < strs.size(); i++) {
            string s = strs[i];
            if(s.length()==0)return "";
            for (int j = 0; j < s.length(); j++) {
                if (strs[0][j] != s[j]) {
                    v.resize(j);
                    break;
                } else if (j == s.length() - 1) {
                    v.resize(j + 1);
                    break;
                } else if (j == strs[0].length() - 1) {
                    break;
                }
            }
            string word = "";
            for (int i = 0; i < v.size(); i++) {
                char c = strs[0][i];
                word += c;
            }
            strs[0]=word;
        }
        // string word = "";
        // for (int i = 0; i < v.size(); i++) {
        //     char c = strs[0][i];
        //     word += c;
        // }
        return strs[0];
    }
};