int kthSmallest(vector<int> &arr, int k)
{
    int maxi = *max_element(arr.begin(), arr.end());
    vector<int> v(maxi + 1, 0);
    int ans = 0;
    for (int num : arr)
    {
        v[num]++;
    }
    for (int i = 1; i <= maxi; i++)
    {
        if (v[i])
        {
            ans = i;
            k--;
        }
        if (k == 0)
        {
            break;
        }
    }
    return ans;
}