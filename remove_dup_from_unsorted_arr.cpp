vector<int> removeDuplicate(int A[], int N)
{
    set<int> s;
    vector<int> res;
    for (int i = 0; i < N; i++)
    {
        int t = s.size();
        s.insert(A[i]);
        if (t != s.size())
        {
            res.push_back(A[i]);
        }
    }
    return res;
}