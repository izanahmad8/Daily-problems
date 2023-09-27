vector<int> printClosest(int arr[], int brr[], int n, int m, int x)
{
    vector<int> ans;
    int i = 0, j = m - 1, diff = INT_MAX;
    int a = 0, b = 0;
    while (i < n && j >= 0)
    {
        int sum = arr[i] + brr[j];
        if (abs(sum - x) < diff)
        {
            diff = abs(sum - x);
            a = arr[i];
            b = brr[j];
        }
        if (sum > x)
            j--;
        else
            i++;
    }
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}