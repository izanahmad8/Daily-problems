#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string s, t;
        cin >> s;
        t = s;
        int count = 0;
        reverse(t.begin(), t.end());
        for (int i = 1; i < s.size(); i++)
        {
            if (abs(s[i] - s[i - 1]) == abs(t[i] - t[i - 1]))
            {
                count++;
            }
        }
        if (count == s.size() - 1)
        {
            cout << "Funny" << endl;
            ;
        }
        else
        {
            cout << "Not Funny" << endl;
        }
    }
}
