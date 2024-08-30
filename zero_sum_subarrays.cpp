long long int findSubarray(vector<long long int> &arr, int n)
{
    unordered_map<long long int, long long int> mp;
    long long int sum = 0;
    long long int ans = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (mp.find(sum) != mp.end())
        {
            ans += mp[sum];
        }
        mp[sum]++;
    }
    return ans;
}