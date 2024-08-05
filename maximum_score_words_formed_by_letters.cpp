int maxScore = INT_MIN;
void solve(int i, vector<string> &words, vector<int> &score, int currScore, vector<int> &freq)
{
    maxScore = max(currScore, maxScore);
    if (i >= words.size())
        return;
    int j = 0;
    int tempScore = 0;
    vector<int> upFreq = freq;
    while (j < words[i].size())
    {
        char ch = words[i][j];
        upFreq[ch - 'a']--;
        tempScore += score[ch - 'a'];
        if (upFreq[ch - 'a'] < 0)
        {
            break;
        }
        j++;
    }
    if (j == words[i].size())
    {
        solve(i + 1, words, score, currScore + tempScore, upFreq);
    }
    solve(i + 1, words, score, currScore, freq);
}
int maxScoreWords(vector<string> &words, vector<char> &letters, vector<int> &score)
{
    vector<int> freq(26, 0);
    for (char &ch : letters)
    {
        freq[ch - 'a']++;
    }
    solve(0, words, score, 0, freq);
    return maxScore;
}