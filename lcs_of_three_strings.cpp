int solve(string &A, string &B, string &C, int i, int j, int k, int n1, int n2, int n3, vector<vector<vector<int>>> &dp)
{
    if (i == n1 || j == n2 || k == n3)
    {
        return 0;
    }
    if (dp[i][j][k] != -1)
    {
        return dp[i][j][k];
    }
    if (A[i] == B[j] && A[i] == C[k])
    {
        return dp[i][j][k] = 1 + solve(A, B, C, i + 1, j + 1, k + 1, n1, n2, n3, dp);
    }
    int a = solve(A, B, C, i + 1, j, k, n1, n2, n3, dp);
    int b = solve(A, B, C, i, j + 1, k, n1, n2, n3, dp);
    int c = solve(A, B, C, i, j, k + 1, n1, n2, n3, dp);
    return dp[i][j][k] = max({a, b, c});
}
int lcsOf3(string &s1, string &s2, string &s3)
{
    int n1 = s1.size();
    int n2 = s2.size();
    int n3 = s3.size();
    vector<vector<vector<int>>> dp(n1, vector<vector<int>>(n2, vector<int>(n3, -1)));
    return solve(s1, s2, s3, 0, 0, 0, n1, n2, n3, dp);
}