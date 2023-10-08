string removeDups(string S)
{
    vector<int> arr(26, 0);
    for (int i = 0; i < S.size(); i++)
    {
        int num = S[i] - 'a';
        if (arr[num])
        {
            S.erase(i--, 1);
        }
        else
        {
            arr[num]++;
        }
    }
    return S;
}