#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= 0)
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if (a >= k)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}