string firstAlphabet(string S)
{
    string res;
    res.push_back(S[0]);
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 32)
        {
            res.push_back(S[i + 1]);
        }
    }
    return res;
}