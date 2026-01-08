int atMost(vector<int> &arr, int k)
{
    int odd = 0;
    int ans = 0;
    int start = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2)
        {
            odd++;
        }
        while (odd > k)
        {
            if (arr[start] % 2)
            {
                odd--;
            }
            start++;
        }
        ans += i - start + 1;
    }
    return ans;
}
int countSubarrays(vector<int> &arr, int k)
{
    return atMost(arr, k) - atMost(arr, k - 1);
}