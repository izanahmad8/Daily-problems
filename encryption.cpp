#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int l = s.length();
    int f = floor(sqrt(l));
    int c = ceil(sqrt(l));
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 32)
        {
            s.erase(s.begin() + i);
        }
    }
    string out = "";
    for (int i = 0; i < c; i++)
    {
        for (int j = i; j < l; j += c)
        {
            out.push_back(s[j]);
        }
        out.push_back(32);
    }
    for (int i = 0; i < out.size(); i++)
    {
        cout << out[i];
    }
}