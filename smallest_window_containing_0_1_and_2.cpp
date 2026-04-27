int smallestSubstring(string s)
{
    int n = s.size();
    int win = INT_MAX, currWin = 0;
    int freq[3] = {0};
    int i = 0, j = 0;
    while (j < n)
    {
        freq[s[j] - '0']++;
        if (freq[s[j] - '0'] == 1)
        {
            currWin++;
        }
        if (currWin == 3)
        {
            while (freq[s[i] - '0'] > 1)
            {
                freq[s[i] - '0']--;
                i++;
            }
            win = min(win, j - i + 1);
            freq[s[i] - '0']--;
            i++;
            currWin--;
        }
        j++;
    }
    return win == INT_MAX ? -1 : win;
}