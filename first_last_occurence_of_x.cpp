vector<int> firstAndLast(vector<int> &arr, int n, int x)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        if (arr[l] < x)
        {
            l++;
        }
        else if (arr[h] > x)
        {
            h--;
        }
        else
        {
            return {l, h};
        }
    }
    return {-1};
}