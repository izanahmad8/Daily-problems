int getSingle(vector<int> &arr)
{
    int res = 0;
    for (int &num : arr)
    {
        res ^= num;
    }
    return res;
}