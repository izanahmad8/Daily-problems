#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int ar[26] = {0};
    for (int i = 0; i < a.length(); i++)
        ar[a[i] - 'a']++;
    for (int i = 0; i < b.length(); i++)
        ar[b[i] - 'a']--;
    int sum = 0;
    for (int i = 0; i < 26; i++)
        sum += abs(ar[i]);
    cout << sum;
    return 0;
}
