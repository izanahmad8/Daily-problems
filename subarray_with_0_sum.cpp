bool subArrayExists(int arr[], int n)
{
    unordered_map<int, bool> mp;
    int sum = 0;
    mp[0] = true;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (mp.find(sum) != mp.end())
        {
            return mp[sum];
        }
        else
        {
            mp[sum] = true;
        }
    }
    return false;
}