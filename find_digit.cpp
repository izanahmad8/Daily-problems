#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
    cin>>n;
    int chk=n;
    while(chk>0)
      {
          int temp;
          temp=chk%10;
          if(temp==0)
          { 
              chk/=10;
              continue;
              
          }
            else if(n%temp==0)
            {
                count++;
            } 
           chk/=10;
      }
    cout<<count<<endl;
    }
    return 0;
}
