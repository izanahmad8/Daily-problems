vector<int> countDistinct(vector<int> &arr, int k)
{
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < k; i++)
    {
        mp[arr[i]]++;
    }
    ans.push_back(mp.size());
    int i = 0;
    for (int j = k; j < arr.size(); j++)
    {
        mp[arr[i]]--;
        if (mp[arr[i]] == 0)
        {
            mp.erase(arr[i]);
        }
        i++;
        mp[arr[j]]++;
        ans.push_back(mp.size());
    }
    return ans;
}