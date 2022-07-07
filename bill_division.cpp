#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0,cost=0,actual_cost=0;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int charged_cost;
    cin>>charged_cost;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
    }
    cost=sum-v[k];
    actual_cost=cost/2;
    if(charged_cost-actual_cost==0)
    {
        cout<<"Bon Appetit"<<endl;
    }
    else
    {
        cout<<charged_cost-actual_cost<<endl;
    }    
    return 0;
}

