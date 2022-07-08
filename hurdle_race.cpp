#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(v[n-1]>k)
    {
        int dose=v[n-1]-k;
        cout<<dose<<endl;
    }
    else if(v[n-1]<k)
    {
        cout<<count<<endl;
    }
    return 0;
}
