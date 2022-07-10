#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; 
	cin>>s;
	 int a,b,c,d;
	 a=s[0]+s[1];
	 b=s[3]+s[4];
	 c=s[4]+s[5];
	 d=s[7]+s[8];
	 if(a%2!=0 || b%2!=0 ||c%2!=0 ||d%2!=0 || s[2]=='A'||s[2]=='E'||s[2]=='I'||s[2]          =='O'||s[2] =='U'||s[2]=='Y')
	 {
		 cout<<"invalid"<<endl;
	 }
	 else
	 {
		 cout<<"valid"<<endl;
	 }

}