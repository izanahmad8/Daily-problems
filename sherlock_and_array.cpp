#include <bits/stdc++.h>
using namespace std;
string balancedsum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int l_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (l_sum == sum - arr[i])
        {
            return "YES";
        }
        l_sum += arr[i];
        sum -= arr[i];
    }
    return "NO";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << balancedsum(arr, n) << endl;
    }
}