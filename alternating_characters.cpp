#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}
