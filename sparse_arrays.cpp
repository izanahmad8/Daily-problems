#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int q;
    cin >> q;
    string query[q];
    for (int i = 0; i < q; i++)
    {
        cin >> query[i];
    }
    for (int i = 0; i < q; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (query[i] == s[j])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
