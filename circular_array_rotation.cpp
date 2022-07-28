#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    int a[n], query[q];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    k = k % n;
    reverse(a, a + n - k);
    reverse(a + n - k, a + n);
    reverse(a, a + n);
    while (q--)
    {
        int x;
        cin >> x;
        cout << a[x] << endl;
    }
    return 0;
}
