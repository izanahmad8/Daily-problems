#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        long long sum = 0, element = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if ((sum / n) <= k)
        {
            cout << 0 << endl;
        }
        else
        {
            element = (sum / (k + 1)) - n + 1;
            cout << element << endl;
        }
    }
    return 0;
}