void solve(string &s, int i, unordered_set<string> &st, int count, int &maxCount)
{
    if (i >= s.size())
    {
        maxCount = max(maxCount, count);
        return;
    }
    for (int j = i; j < s.size(); j++)
    {
        string str = s.substr(i, j - i + 1);
        if (st.find(str) == st.end())
        {
            st.insert(str);
            solve(s, j + 1, st, count + 1, maxCount);
            st.erase(str);
        }
    }
}
int maxUniqueSplit(string s)
{
    int maxCount = 0;
    int count = 0;
    unordered_set<string> st;
    solve(s, 0, st, count, maxCount);
    return maxCount;
}