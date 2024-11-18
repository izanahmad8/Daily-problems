vector<int> decrypt(vector<int> &code, int k)
{
    int n = code.size();
    vector<int> ans(n, 0);
    if (k == 0)
        return ans;
    if (k > 0)
    {
        int sum = accumulate(code.begin() + 1, code.begin() + 1 + k, 0);
        ans[0] = sum;
        int i = 1;
        int j = k + 1;
        while (i < n)
        {
            sum = sum - code[i] + code[j % n];
            ans[i] = sum;
            i++;
            j++;
        }
        return ans;
    }
    k = -k;
    int sum = accumulate(code.end() - k, code.end(), 0);
    ans[0] = sum;
    int i = 0;
    int j = n - k;
    while (i < n - 1)
    {
        sum = sum - code[j % n] + code[i];
        ans[i + 1] = sum;
        i++;
        j++;
    }
    return ans;
}