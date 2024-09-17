#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> arr,int t)
{
    int n=arr.size();
    unordered_map<int,int> m;
     int val=t;
    for(int i=0;i<n;i++)
    {
        val=t-arr[i];
        if(m.find(val)!=m.end())
        {
            return {m[val],i};
        }
        m[arr[i]]=i;
    }
    return {-1,-1};
}
int main()
{
    int n;
    cout<<"Enter number of elements ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    int target;
    cout<<"Enter target value ";
    cin>>target;
    vector<int> v=twosum(arr,target);
    cout<<v[0]<<" "<<v[1]<<endl;
    return 0;
}