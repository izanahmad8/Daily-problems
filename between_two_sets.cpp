#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int factor = 0;
    for (int z = 1; z <= 100; z++)
    {
        bool set = true;
        for (int i = 0; i < n; i++)
        {
            if (z % a[i] != 0)
            {
                set = false;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (b[i] % z != 0)
            {
                set = false;
            }
        }
        if (set)
        {
            factor++;
        }
    }
    cout << factor << endl;
    return 0;
}
