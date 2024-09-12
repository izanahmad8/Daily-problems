int countConsistentStrings(string allowed, vector<string> &words)
{
    int count = 0;
    unordered_set<char> st(allowed.begin(), allowed.end());
    for (string &s : words)
    {
        int chk = 1;
        for (char &ch : s)
        {
            if (st.find(ch) == st.end())
            {
                chk = 0;
                break;
            }
        }
        count += chk;
    }
    return count;
}