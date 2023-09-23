vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    map<int, int> m;
    for (int i = 0; i < n1; i++)
    {
        if (A[i] == A[i - 1])
            continue;
        m[A[i]]++;
    }
    for (int i = 0; i < n2; i++)
    {
        if (B[i] == B[i - 1])
            continue;
        m[B[i]]++;
    }
    for (int i = 0; i < n3; i++)
    {
        if (C[i] == C[i - 1])
            continue;
        m[C[i]]++;
    }
    vector<int> res;
    for (auto i : m)
    {
        if (i.second > 2)
        {
            res.push_back(i.first);
        }
    }
    if (res.empty())
    {
        return {-1};
    }
    return res;
}