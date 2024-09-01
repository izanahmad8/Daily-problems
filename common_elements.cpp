vector<int> common_element(vector<int> v1, vector<int> v2)
{
    unordered_map<int, int> mp;
    vector<int> ans;
    for (auto num : v1)
    {
        mp[num]++;
    }
    for (auto num : v2)
    {
        if (mp[num])
        {
            ans.push_back(num);
            mp[num]--;
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}