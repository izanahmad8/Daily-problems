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
    sort(v.begin(), v.end());
    int count = 0;
    for (int i = 0; i < n - 1;)
    {
        if (v[i] == v[i + 1])
        {
            count++;
            i = i + 2;
        }
        else
        {
            i++;
        }
    }
    cout << count << " ";
}
