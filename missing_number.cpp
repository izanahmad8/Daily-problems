#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[10000];
    memset(ar, 0, sizeof(ar));
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ar[x]--;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        ar[x]++;
    }
    for (int i = 0; i < 10000; i++)
    {
        if (ar[i] != 0)
            cout << i << " ";
    }
    return 0;
}
