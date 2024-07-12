string removeSubstr(string &s, string &matchStr)
{
    stack<int> st;
    for (char i : s)
    {
        if (!st.empty() && st.top() == matchStr[0] && i == matchStr[1])
        {
            st.pop();
        }
        else
        {
            st.push(i);
        }
    }
    string remainStr;
    while (!st.empty())
    {
        remainStr.push_back(st.top());
        st.pop();
    }
    reverse(begin(remainStr), end(remainStr));
    return remainStr;
}
int maximumGain(string s, int x, int y)
{
    int n = s.size();
    int score = 0;
    string maxStr = x > y ? "ab" : "ba";
    string minStr = x < y ? "ab" : "ba";
    // first pass
    string first = removeSubstr(s, maxStr);
    int removeChar = n - first.size();
    score += (removeChar / 2) * max(x, y);
    // second pass
    string second = removeSubstr(first, minStr);
    removeChar = first.size() - second.size();
    score += (removeChar / 2) * min(x, y);
    return score;
}