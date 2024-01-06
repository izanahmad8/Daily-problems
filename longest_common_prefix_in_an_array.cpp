string longestCommonPrefix(string arr[], int N)
{
    string ans = arr[0];
    for (int i = 0; i < N - 1; i++)
    {
        string x = compare(ans, arr[i + 1]);
        if (x == "")
        {
            return "-1";
        }
        ans = x;
    }
    return ans;
}
string compare(string a, string b)
{
    int i = 0, j = 0;
    string res = "";
    while (i < a.size() && j < b.size())
    {
        if (a[i] == b[i])
        {
            res += a[i];
        }
        else
        {
            return res;
        }
        i++;
        j++;
    }
    return res;
}