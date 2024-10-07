void frequencyCount(vector<int> &arr, int N, int P)
{
    unordered_map<int, int> mp;
    for (int &num : arr)
    {
        mp[num]++;
    }
    for (int i = 1; i <= N; i++)
    {
        arr[i - 1] = mp[i];
    }
}