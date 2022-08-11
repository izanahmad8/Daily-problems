#include <bits/stdc++.h>
using namespace std;
int main()
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
    int e = 100;
    int i = 0;
    while (true)
    {
        if (v[i] == 1)
        {
            e = e - 3;
        }
        else
        {
            e = e - 1;
        }
        i = (i + k) % n;
        if (i % n == 0)
        {
            break;
        }
    }
    cout << e << endl;
}