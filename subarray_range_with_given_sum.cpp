int subArraySum(vector<int> &arr, int tar)
{
    int count = 0;
    unordered_map<int, int> mp;
    int sum = 0;
    mp[0] = 1;
    for (int &num : arr)
    {
        sum += num;
        if (mp.find(sum - tar) != mp.end())
        {
            count += mp[sum - tar];
        }
        mp[sum]++;
    }
    return count;
}