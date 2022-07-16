#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    float a = 0, b = 0, c = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            a++;
        }
        else if (arr[i] < 0)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    cout << a / arr.size() << endl;
    cout << b / arr.size() << endl;
    cout << c / arr.size() << endl;
}