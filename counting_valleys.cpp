#include <bits/stdc++.h>
using namespace std;
int main()
{
    int steps;
    cin>>steps;
    string path;
    cin>>path;
    int level=0,valley=0;
    for(int i=0;i<steps;i++)
    {
        if(path[i]=='D')
        {
            level--;
        }
        else if(path[i]=='U')
        {
            level++;
        }
        if(path[i]=='U' && level==0)
        {
            valley++;
        }
    }
    cout<<valley<<endl;
    return 0;
}

