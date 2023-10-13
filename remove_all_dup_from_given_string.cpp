string removeDuplicates(string str)
{
    set<char> s;
    string ans = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (s.find(str[i]) == s.end())
        {
            s.insert(str[i]);
            ans.push_back(str[i]);
        }
    }
    return ans;
}