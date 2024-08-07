unordered_set<string> st;
vector<string> res;
void solve(int i, string &s, string &sen)
{
    if (i >= s.size())
    {
        res.push_back(sen);
        return;
    }
    for (int j = i; j < s.size(); j++)
    {
        string temp = s.substr(i, j - i + 1);
        if (st.find(temp) != st.end())
        {
            string str = sen;
            if (!sen.empty())
            {
                sen += " ";
            }
            sen += temp;
            solve(j + 1, s, sen);
            sen = str;
        }
    }
}
vector<string> wordBreak(int n, vector<string> &dict, string s)
{
    for (string &str : dict)
    {
        st.insert(str);
    }
    string sen = "";
    solve(0, s, sen);
    return res;
}