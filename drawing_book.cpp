#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    int min = 0;
    min = (n / 2) - (p / 2);
    if (min > p / 2)
    {
        min = p / 2;
    }
    cout << min << endl;
    return 0;
}
