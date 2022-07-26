#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int d, m;
    cin >> d >> m;
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < i + m; j++)
        {
            sum += v[j];
        }
        if (sum == d)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
