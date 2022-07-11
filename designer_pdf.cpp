#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 26; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    string word;
    cin >> word;
    int len = 0;
    for (int i = 0; i < word.size(); i++)
    {
        len = max(len, v[word[i] - 97]);
    }
    cout << len * word.size() << endl;
    return 0;
}