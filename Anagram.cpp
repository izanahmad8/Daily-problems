bool areAnagrams(string &s1, string &s2)
{
    vector<int> freq(26, 0);
    for (char &ch : s1)
    {
        freq[ch - 'a']++;
    }
    for (char &ch : s2)
    {
        freq[ch - 'a']--;
    }
    for (int count : freq)
    {
        if (count != 0)
        {
            return false;
        }
    }
    return true;
}