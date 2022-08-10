#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, rem = 0, rev = 0, count = 0, num;
    cin >> i >> j >> k;
    for (int a = i; a <= j; a++)
    {
        num = a;
        while (num != 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        if ((abs(a - rev) % k) == 0)
        {
            count++;
        }
        rev = 0;
    }
    cout << count << endl;
    return 0;
}
