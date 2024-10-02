vector<int> arrayRankTransform(vector<int> &arr)
{
    unordered_map<int, int> mp;
    vector<int> sorted = arr;
    sort(begin(sorted), end(sorted));
    int rank = 1;
    for (int &num : sorted)
    {
        if (mp.find(num) == mp.end())
        {
            mp[num] = rank++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = mp[arr[i]];
    }
    return arr;
}