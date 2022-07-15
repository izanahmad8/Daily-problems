#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[N];
    long long product = 1;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        product = (product * a[i]) % 1000000007;
    }
    cout << product;
}