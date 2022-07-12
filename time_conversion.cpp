#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string hrs = s.substr(0, 2);
    string frmt = s.substr(s.size() - 2);
    string out = s.substr(0, 8);
    if (frmt == "PM" && hrs != "12")
    {
        int hour = stoi(hrs);
        hour = (hour + 12) % 24;
        stringstream ss;
        ss << hour;

        out[0] = ss.str()[0];
        out[1] = ss.str()[1];
    }
    else if (frmt == "AM" && hrs == "12")
    {
        out[0] = out[1] = '0';
    }
    cout << out;
    return 0;
}
