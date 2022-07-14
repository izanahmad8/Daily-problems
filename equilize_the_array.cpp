#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int> freq(101, 0);
    int mxcount = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        freq[x]++;
        mxcount = max(mxcount, freq[x]);
    }
    cout << n - mxcount << endl;
    return 0;
}
