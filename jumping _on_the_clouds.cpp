#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int jump = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    while (i < n - 1)
    {
        if (arr[i + 1] == 1)
        {
            i++;
            jump++;
        }
        else
        {
            i = i + 2;
            jump++;
        }
    }
    cout << jump << endl;
}
