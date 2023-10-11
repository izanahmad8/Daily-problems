string removeConsecutiveCharacter(string S)
{
    for (int i = 1; i < S.size(); i++)
    {
        if (S[i] == S[i - 1])
        {
            S.erase(i - 1, 1);
            i = 0;
        }
    }
    return S;
}