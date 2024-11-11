int minIncrements(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int op = 0;
    int maxi = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
        }
        else
        {
            maxi++;
            op += maxi - arr[i];
        }
    }
    return op;
}