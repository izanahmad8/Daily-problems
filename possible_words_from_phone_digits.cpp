vector<string> res;
void solve(int ind, int a[], unordered_map<int, string> &mp, string tmp, int N)
{
    if (ind >= N)
    {
        res.push_back(tmp);
        return;
    }
    string s = mp[a[ind]];
    for (int i = 0; i < s.size(); i++)
    {
        tmp.push_back(s[i]);
        solve(ind + 1, a, mp, tmp, N);
        tmp.pop_back();
    }
}
vector<string> possibleWords(int a[], int N)
{
    string tmp = "";
    unordered_map<int, string> mp{
        {2, "abc"},
        {3, "def"},
        {4, "ghi"},
        {5, "jkl"},
        {6, "mno"},
        {7, "pqrs"},
        {8, "tuv"},
        {9, "wxyz"}};
    if (N == 0)
    {
        return res;
    }
    solve(0, a, mp, tmp, N);
    return res;
}