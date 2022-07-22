#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin >> p;
    while (p--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        string all = "abcdefghijklmnopqrstuvwxyz";
        int flag = 0;
        for (int i = 0; i < all.size(); i++)
        {
            if (s1.find(all[i]) != string::npos && s2.find(all[i]) != string::npos)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
