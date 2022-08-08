#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, sum = 0;
        cin >> m >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                sum = a[i] + a[j];
                if (i < j)
                {
                    if (i != j)
                    {
                        if (sum == m)
                        {
                            cout << i + 1 << " " << j + 1 << endl;
                        }
                    }
                }
            }
        }
    }
}
