#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> freq(100);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }
    for (int i = 0; i < 100; i++)
    {
        cout << freq[i] << " ";
    }
}
