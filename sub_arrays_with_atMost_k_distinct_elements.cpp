int countAtMostK(vector<int> &arr, int k)
{
    int res = 0;
    int i = 0, j = 0;
    unordered_map<int, int> mp;
    while (j < arr.size())
    {
        mp[arr[j]]++;
        if (mp[arr[j]] == 1)
        {
            k--;
        }
        while (k < 0)
        {
            mp[arr[i]]--;
            if (mp[arr[i]] == 0)
            {
                k++;
            }
            i++;
        }
        res += (j - i + 1);
        j++;
    }
    return res;
}