#include <bits/stdc++.h>
using namespace std;
int main()
{
   int q;
   cin>>q;
   while(q--)
   {
       int x,y,z;
       cin>>x>>y>>z;
       int A=abs(z-x);
       int B=abs(z-y);
       if(A<B)
       {
           cout<<"Cat A"<<endl;
       }
       else if(A>B)
       {
           cout<<"Cat B"<<endl;
       }
       else if (A==B)
       {
           cout<<"Mouse C"<<endl;
       }
   } 
   return 0;
}