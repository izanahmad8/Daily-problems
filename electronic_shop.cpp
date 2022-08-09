#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b, n, m;
    cin >> b >> n >> m;
    int k[n], u[m];
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> u[i];
    }
    int sum = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (k[i] + u[j] <= b && k[i] + u[j] > sum)
            {
                sum = k[i] + u[j];
            }
        }
    }
    cout << sum;
    return 0;
}
