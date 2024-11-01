string makeFancyString(string s)
{
    string ans = "";
    int count = 1;
    for (char &ch : s)
    {
        if (ans.empty())
        {
            ans.push_back(ch);
            continue;
        }
        if (ch == ans.back())
        {
            count++;
            if (count < 3)
            {
                ans.push_back(ch);
            }
        }
        else
        {
            count = 1;
            ans.push_back(ch);
        }
    }
    return ans;
}