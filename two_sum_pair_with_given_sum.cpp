bool twoSum(vector<int> &arr, int target)
{
    unordered_map<int, bool> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        if (mp.find(target - arr[i]) != mp.end())
        {
            return true;
        }
        else
        {
            mp[arr[i]] = true;
        }
    }
    return false;
}