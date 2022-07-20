#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long int a[n], sum = 0, length = 0, max;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (flag == 0)
        {
            max = a[i];
            flag = 1;
        }
        if (max < a[i])
            max = a[i];
        if (a[i] >= 0)
        {
            sum = sum + a[i];
            length++;
        }
    }
    if (sum == 0 && length == 0)
    {
        cout << max << " "
             << "1";
    }
    else
        cout << sum << " " << length;
    return 0;
}