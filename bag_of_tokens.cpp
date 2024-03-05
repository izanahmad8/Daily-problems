int bagOfTokensScore(vector<int> &tokens, int power)
{
    int score = 0;
    sort(tokens.begin(), tokens.end());
    int max_score = 0;
    int l = 0, r = tokens.size() - 1;
    while (l <= r)
    {
        if (power >= tokens[l])
        {
            score++;
            power -= tokens[l];
            l++;
            max_score = max(max_score, score);
        }
        else if (score > 0)
        {
            score--;
            power += tokens[r];
            r--;
        }
        else
        {
            break;
        }
    }
    return max_score;
}