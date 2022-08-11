#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int count = 0;
        int arr[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i] - 97]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}
