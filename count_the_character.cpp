int getCount(string S, int N)
{
    unordered_map<char, long long> m;
    m[S[0]]++;
    int count = 0;
    for (int i = 1; i < S.size(); i++)
    {
        if (S[i] != S[i - 1])
        {
            m[S[i]]++;
        }
    }
    for (auto i : m)
    {
        if (i.second == N)
        {
            count++;
        }
    }
    return count;
}