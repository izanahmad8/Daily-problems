#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v;
    int n;
    cin >> v >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v)
        {
            cout << i << endl;
        }
    }
    return 0;
}