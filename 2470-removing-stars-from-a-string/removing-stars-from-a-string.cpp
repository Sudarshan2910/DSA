class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='*')
            {
                if(!s.empty())
                st.pop();
                else
                continue;
            }
            else st.push(s[i]);
        }
        stack<char> f;
        while(!st.empty())
        {
            f.push(st.top());
            st.pop();
        }
        string a;
        while(!f.empty())
        {   
            a+=f.top();
            f.pop();
        }
        return a;
    }
};