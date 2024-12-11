void mergeArrays(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = b.size();
    int i = n - 1;
    int j = 0;
    while (i >= 0 && j < m)
    {
        if (a[i] >= b[j])
        {
            swap(a[i], b[j]);
            i--;
            j++;
        }
        else
        {
            break;
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
}