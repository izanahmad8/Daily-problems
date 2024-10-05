long long findSmallest(vector<int> &arr)
{
    long long res = 1;
    for (int i = 0; i < arr.size() && arr[i] <= res; i++)
    {
        res += arr[i];
    }
    return res;
}