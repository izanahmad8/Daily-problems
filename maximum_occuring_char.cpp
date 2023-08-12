char getMaxOccuringChar(string str)
{
    map<char, int> m;
    for (auto i : str)
    {
        m[i]++;
    }
    char ans;
    int max = 0;
    for (auto i : m)
    {
        if (i.second > max)
        {
            max = i.second;
            ans = i.first;
        }
    }
    return ans;
}