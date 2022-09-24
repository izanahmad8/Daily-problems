int lonelyinteger(vector<int> a)
{
    vector<int> freq(101);
    for (int i = 0; i < a.size(); i++)
    {
        freq[a[i]]++;
    }
    for (int i = 0; i < freq.size(); i++)
    {
        if (freq[i] == 1)
        {
            return i;
        }
    }
    return -1;
}