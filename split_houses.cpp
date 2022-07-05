#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   bool b=true;
   for(int i=0;i<n;i++)
   {
	   if(s[i]=='H' && s[i+1]=='H')
	   {
		   b=false;
      }   
   }
   if(b)
   {
      cout<<"YES"<<endl;
      for(int i=0;i<n;i++)
      {
         if(s[i]=='.')
         {
            s.replace(i,1,"B");
         }
      }
      cout<<s<<endl;
   }
   else
   {
      cout<<"NO"<<endl;
   }
}