class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        bool answer=true;

        unordered_map<int,int> m,m1;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        
        unordered_map<int,int>::iterator it=m.begin();
        for(;it!=m.end();it++)
        {
            m1[it->second]++;
            
        }
        unordered_map<int,int>::iterator itr=m1.begin();
        for(;itr!=m1.end();itr++)
        {
            if(itr->second>1){
                answer=false;
                break;
            }
        }
        return answer;
    }
};