string longestCommonPrefix(vector<string> &str)
{
    int n = str.size();
    sort(begin(str), end(str));
    string ans = "";
    string first = str[0];
    string last = str[n - 1];
    for (int i = 0; i < min(first.size(), last.size()); i++)
    {
        if (first[i] != last[i])
        {
            return ans;
        }
        ans += first[i];
    }
    return ans;
}