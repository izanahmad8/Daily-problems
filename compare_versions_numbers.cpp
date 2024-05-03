vector<string> getTokens(string version)
{
    vector<string> tokens;
    stringstream ss(version);
    string token = "";
    while (getline(ss, token, '.'))
    {
        tokens.push_back(token);
    }
    return tokens;
}
int compareVersion(string version1, string version2)
{
    vector<string> v1 = getTokens(version1);
    vector<string> v2 = getTokens(version2);
    int i = 0;
    while (i < v1.size() || i < v2.size())
    {
        int a = i < v1.size() ? stoi(v1[i]) : 0;
        int b = i < v2.size() ? stoi(v2[i]) : 0;
        if (a < b)
            return -1;
        if (a > b)
            return 1;
        i++;
    }
    return 0;
}