#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d1, m1, y1;
    cin >> d1 >> m1 >> y1;
    int d2, m2, y2;
    cin >> d2 >> m2 >> y2;
    if (d1 > d2 && m1 == m2 && y1 == y2)
    {
        cout << 15 * (d1 - d2) << endl;
    }
    else if (y1 == y2 && m1 > m2)
    {
        cout << 500 * (m1 - m2) << endl;
    }
    else if (y1 > y2)
    {
        cout << "10000" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}
