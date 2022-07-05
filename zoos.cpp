#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int z=0,o=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='z')
		{
			z++;
		}
		else if(s[i]=='o')
		{
			o++;
		}
	}
	if(z*2==o)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}