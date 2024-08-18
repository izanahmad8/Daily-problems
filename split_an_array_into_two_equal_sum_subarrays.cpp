bool canSplit(vector<int> &arr)
{
    int n = arr.size();
    int lsum = accumulate(arr.begin(), arr.end(), 0);
    int rsum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        rsum += arr[i];
        lsum -= arr[i];
        if (rsum == lsum)
        {
            return true;
        }
    }
    return false;
}