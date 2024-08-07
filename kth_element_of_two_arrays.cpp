int kthElement(int k, vector<int> &arr1, vector<int> &arr2)
{
    int i = 0, j = 0;
    int ans = -1;
    int n = arr1.size();
    int m = arr2.size();
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            ans = arr1[i++];
        }
        else
        {
            ans = arr2[j++];
        }
        k--;
        if (k == 0)
            return ans;
    }
    while (i < n)
    {
        ans = arr1[i++];
        k--;
        if (k == 0)
            return ans;
    }
    while (j < m)
    {
        ans = arr2[j++];
        k--;
        if (k == 0)
            return ans;
    }
    return ans;
}