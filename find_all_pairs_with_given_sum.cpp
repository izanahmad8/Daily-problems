vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
{
    unordered_set<int> s;
    vector<pair<int, int>> ans;
    for (int i = 0; i < N; i++)
    {
        s.insert(A[i]);
    }
    for (int i = 0; i < M; i++)
    {
        int diff = X - B[i];
        if (s.find(diff) != s.end())
        {
            pair<int, int> p;
            p.first = diff;
            p.second = B[i];
            ans.push_back(p);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}