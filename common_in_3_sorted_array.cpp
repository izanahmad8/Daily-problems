vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c)
{
    vector<int> res;
    int x = a.size();
    int y = b.size();
    int z = c.size();
    int i = 0, j = 0, k = 0;
    while (i < x && j < y && k < z)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            res.push_back(a[i]);
            i++;
            j++;
            k++;
            while (i < x && a[i] == a[i - 1])
                i++;
            while (j < y && b[j] == b[j - 1])
                j++;
            while (k < z && c[k] == c[k - 1])
                k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    return res;
}