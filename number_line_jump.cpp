#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    int chk=(x2-x1)%(v1-v2);
    if(v1>v2)
    {
        if(chk==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    if(v2>v1 || v2==v1)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
