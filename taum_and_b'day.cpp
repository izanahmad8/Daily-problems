#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long b, w;
        cin >> b >> w;
        long long bc, wc, z;
        cin >> bc >> wc >> z;
        long long sum = 0;
        long long btow = w * (z + bc);
        long long wtob = b * (z + wc);
        long long black = b * bc;
        long long white = w * wc;
        sum = black + white;
        if (black + btow < sum)
        {
            sum = black + btow;
        }
        if (white + wtob < sum)
        {
            sum = white + wtob;
        }
        cout << sum << endl;
    }
    return 0;
}
