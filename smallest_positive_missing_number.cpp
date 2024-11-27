int missingNumber(vector<int> &arr)
{
    sort(begin(arr), end(arr));
    int ans = 1;
    for (int &ele : arr)
    {
        if (ele == ans)
        {
            ans++;
        }
        else if (ele > ans)
        {
            break;
        }
    }
    return ans;
}