#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            s.erase(i - 1, 2);
            i = 0;
        }
    }
    if (s.size() == 0)
    {
        cout << "Empty String";
    }
    else
    {
        cout << s;
    }
    return 0;
}
