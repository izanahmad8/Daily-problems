vector<int> constructList(int q, vector<vector<int>> &queries)
{
    vector<int> ans = {0};
    int XOR = 0;
    for (auto it : queries)
    {
        if (it[0] == 0)
        {
            ans.push_back(XOR ^ it[1]);
        }
        else
        {
            XOR ^= it[1];
        }
    }
    for (int &i : ans)
    {
        i ^= XOR;
    }
    sort(ans.begin(), ans.end());
    return ans;
}