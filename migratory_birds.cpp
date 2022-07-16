#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<int> freq(101, 0);
    int mxcount = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        freq[x]++;
        mxcount = max(mxcount, freq[x]);
    }
    auto it = find(freq.begin(), freq.end(), mxcount);
    if (it != freq.end())
    {
        cout << it - freq.begin() << endl;
    }
}
