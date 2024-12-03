string addSpaces(string s, vector<int> &spaces)
{
    string res;
    int i = 0;
    for (int space : spaces)
    {
        res += s.substr(i, space - i) + " ";
        i = space;
    }
    res += s.substr(i);
    return res;
}