#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int word = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < 97)
        {
            word++;
        }
    }
    cout << word << endl;
}