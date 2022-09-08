#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v, result;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int count = 0;
    while (count < v.size())
    {
        result.push_back(v.size() - count);
        int min = 1001;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > 0 && v[i] < min)
            {
                min = v[i];
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            v[i] -= min;
            if (v[i] == 0)
            {
                count++;
            }
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}
