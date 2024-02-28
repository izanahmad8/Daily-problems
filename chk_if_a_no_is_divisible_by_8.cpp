int DivisibleByEight(string s)
{
    int n = s.size();
    if (n < 3)
    {
        return stoi(s) % 8 == 0 ? 1 : -1;
    }
    return stoi(s.substr(n - 3)) % 8 == 0 ? 1 : -1;
}