int maxDistance(vector<int> &arr)
{
    unordered_map<int, int> mp;
    int max_dist = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (mp.find(arr[i]) != mp.end())
        {
            max_dist = max(max_dist, i - mp[arr[i]]);
        }
        else
        {
            mp[arr[i]] = i;
        }
    }
    return max_dist;
}