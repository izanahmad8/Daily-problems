vector<long long> smallerSum(int n, vector<int> &arr)
{
    vector<long long> ans;
    vector<int> v = arr;
    unordered_map<int, long long> mp;
    long long sum = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (mp.find(v[i]) == mp.end())
        {
            mp[v[i]] = sum;
        }
        sum += v[i];
    }
    for (auto itr : arr)
    {
        ans.push_back(mp[itr]);
    }
    return ans;
}