#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int c;
        cin >> c;
        p[i] = c;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (p[p[j]] == i)
            {
                cout << j << endl;
                break;
            }
        }
    }
}
