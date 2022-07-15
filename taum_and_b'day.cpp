#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, w;
        cin >> b >> w;
        int bc, wc, z;
        cin >> bc >> wc >> z;
        int sum = 0;
        int btow = w * (z + bc);
        int wtob = b * (z + wc);
        int black = b * bc;
        int white = w * wc;
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
