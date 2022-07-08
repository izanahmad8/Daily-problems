#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    vector<int>u;
    vector<int>v;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        u.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    int count=0;
    for(int i=0;i<m;i++)
    {
        u[i]+=a;
        if(u[i]>=s && u[i]<=t)
        {
            count++;
        }
    }
    int increment=0;
    for(int i=0;i<n;i++)
    {
        v[i]+=b;
        if(v[i]<=t && v[i]>=s)
        {
            increment++;
        }
    }
    cout<<count<<endl;
    cout<<increment<<endl;
    return 0;
}
