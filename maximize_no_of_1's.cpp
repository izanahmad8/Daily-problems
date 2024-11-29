int maxOnes(vector<int> &arr, int k)
{
    int ans = 0;
    int i = 0;
    int j = 0;
    int cnt = 0;
    while (j < arr.size())
    {
        if (arr[j] == 0)
        {
            cnt++;
        }
        while (cnt > k)
        {
            if (arr[i] == 0)
            {
                cnt--;
            }
            i++;
        }
        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}