bool areRotations(string s1, string s2)
{
    string s = s1 + s1;
    if (s1.size() != s2.size())
    {
        return false;
    }
    return s.find(s2) != string::npos;
}