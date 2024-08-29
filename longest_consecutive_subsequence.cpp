int findLongestConseqSubseq(int arr[], int N)
{
    int maxi = *max_element(arr, arr + N);
    vector<int> v(maxi + 1, 0);
    for (int i = 0; i < N; i++)
    {
        v[arr[i]]++;
    }
    int ans = 0;
    int count = 0;
    for (int i = 0; i <= maxi; i++)
    {
        if (v[i])
        {
            count++;
        }
        else
        {
            count = 0;
        }
        ans = max(ans, count);
    }
    return ans;
}