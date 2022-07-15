#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, rev;
    cin >> s;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev = rev + s[i];
    }
    if (s == rev)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
