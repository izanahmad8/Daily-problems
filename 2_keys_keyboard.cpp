// top-down-approach
int solve(int n, int currA, int clip, vector<vector<int>> &dp)
{
    if (currA == n)
    {
        return 0;
    }
    if (currA > n)
    {
        return INT_MAX / 2;
    }
    if (dp[currA][clip] != -1)
    {
        return dp[currA][clip];
    }
    int copyAndPaste = 2 + solve(n, currA + currA, currA, dp);
    int paste = 1 + solve(n, currA + clip, clip, dp);
    return dp[currA][clip] = min(copyAndPaste, paste);
}
int minSteps(int n)
{
    if (n == 1)
    {
        return 0;
    }
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    return 1 + solve(n, 1, 1, dp);
}