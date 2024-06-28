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

// another way

long long maximumImportance(int n, vector<vector<int>> &roads)
{
    vector<int> degree(n, 0);
    for (auto &vec : roads)
    {
        int a = vec[0];
        int b = vec[1];
        degree[a]++;
        degree[b]++;
    }
    sort(degree.begin(), degree.end());
    long long ans = 0;
    long long value = 1;
    for (int i = 0; i < n; i++)
    {
        ans += degree[i] * value;
        value++;
    }
    return ans;
}