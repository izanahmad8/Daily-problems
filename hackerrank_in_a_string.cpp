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
        string all = "hackerrank";
        int j = 0;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (all[j] == s[i])
            {
                j++;
                count++;
            }
        }
        if (count == 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
