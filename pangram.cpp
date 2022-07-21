#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string ans = "pangram";
    vector<bool> v(26, false);
    int index;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            index = s[i] - 'a';
            v[index] = true;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            index = s[i] - 'A';
            v[index] = true;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] == false)
        {
            ans = "not pangram";
        }
    }
    cout << ans << endl;
}
