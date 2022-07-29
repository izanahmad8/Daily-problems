#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, sum = 0, rem = 0;
        cin >> N >> M;
        vector<int> C;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            C.push_back(x);
        }
        for (int i = 0; i < N; i++)
        {
            sum += C[i];
        }
        rem = sum % M;
        cout << rem << endl;
    }
    return 0;
}