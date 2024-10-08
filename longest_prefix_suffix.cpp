int lps(string str)
{
    int n = str.size();
    vector<int> res(n, 0);
    int j = 0;
    int i = 1;
    while (i < n)
    {
        if (str[i] == str[j])
        {
            res[i] = j + 1;
            i++;
            j++;
        }
        else
        {
            if (j != 0)
            {
                j = res[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
    return res[n - 1];
}