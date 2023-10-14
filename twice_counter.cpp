int countWords(string list[], int n)
{
    unordered_map<string, int> m;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        m[list[i]]++;
    }
    for (auto i : m)
    {
        if (i.second == 2)
        {
            count++;
        }
    }
    return count;
}