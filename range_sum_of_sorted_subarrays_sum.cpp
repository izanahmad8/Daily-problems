const int M = 1e9 + 7;
int rangeSum(vector<int> &nums, int n, int left, int right)
{
    vector<int> tmp;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            tmp.push_back(sum);
        }
    }
    int result = 0;
    sort(tmp.begin(), tmp.end());
    for (int i = left - 1; i < right; i++)
    {
        result = (result + tmp[i]) % M;
    }
    return result;
}