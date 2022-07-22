#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                if (min > (j - i))
                {
                    min = j - i;
                    break;
                }
            }
        }
    }
    if (min == n)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << min << endl;
    }
}
