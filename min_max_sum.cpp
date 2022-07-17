#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long sum = 0;
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int min = a[0], max = a[0];
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << sum - max << " " << sum - min << endl;
    return 0;
}
