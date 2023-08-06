int fact(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return n;
    return n * fact(n - 1);
}

vector<string> permutation(string S)
{
    int n = S.size();
    vector<string> v;
    v.push_back(S);
    int d = fact(n);
    for (int i = 1; i < d; i++)
    {
        next_permutation(S.begin(), S.end());
        v.push_back(S);
    }
    sort(v.begin(), v.end());
    return v;
}