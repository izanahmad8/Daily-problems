vector<int> productExceptSelf(vector<int> &nums)
{
    // approach first
    int n = nums.size();
    vector<int> left(n);
    vector<int> right(n);
    vector<int> result(n);
    left[0] = 1;
    right[n - 1] = 1;
    for (int i = 1; i < n; i++)
    {
        left[i] = nums[i - 1] * left[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = nums[i + 1] * right[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        result[i] = left[i] * right[i];
    }
    return result;
}

vector<int> productExceptSelf(vector<int> &nums)
{
    // approach second
    int n = nums.size();
    vector<int> res(n);
    res[0] = 1;
    for (int i = 1; i < n; i++)
    {
        res[i] = res[i - 1] * nums[i - 1];
    }
    int right_product = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        res[i] = res[i] * right_product;
        right_product *= nums[i];
    }
    return res;
}