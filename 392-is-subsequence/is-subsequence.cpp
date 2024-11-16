class Solution {
public:
    bool isSubsequence(string s, string t) {
    int n=s.length();
	int m=t.length();
	int i=0,j=0;
	bool ans=false;
	while(j<m && i<n) {
		if(s[i]==t[j])
		{
			i++;
			j=j+1;
		}
		else
			j++;
	}
	if(i>=n)ans=true;

	return ans;
    }
};