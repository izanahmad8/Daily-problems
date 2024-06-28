long long maximumImportance(int n, vector<vector<int>> &roads)
{
    unordered_map<int, int> mp;
    for (auto &vec : roads)
    {
        int a = vec[0];
        int b = vec[1];
        mp[a]++;
        mp[b]++;
    }
    vector<pair<int, int>> vec(mp.begin(), mp.end());
    sort(vec.begin(), vec.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second > b.second; });
    long long ans = 0;
    long long i = n;
    for (auto it : vec)
    {
        ans += it.second * i;
        i--;
    }
    return ans;
}