int penaltyScore(string S)
{
    int penalty = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '2' && S[i + 1] == '1')
        {
            penalty++;
        }
    }
    return penalty;
}