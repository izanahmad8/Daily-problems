#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>v;
    for (int i=0;i<n;i++) {
    int x;
    cin>>x;
    v.push_back(x);
    }  
    int q;
    cin>>q;
    int y;
    for(int i=0;i<q;i++)
    {
        cin>>y;
        auto it=lower_bound(v.begin(),v.end(),y);
        if(y==*it)
        {
            cout<<"Yes "<<(it-v.begin()+1)<<endl;
        }
        else
        {
            cout<<"No "<<(it-v.begin()+1)<<endl;
        }
    }
    
    return 0;
}
