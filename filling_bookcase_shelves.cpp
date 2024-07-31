int solve(int i, int remWidth, vector<vector<int>> &books, int maxHeight, int shelfWidth, vector<vector<int>> &dp)
{
    if (i >= books.size())
        return maxHeight;
    if (dp[i][remWidth] != -1)
    {
        return dp[i][remWidth];
    }
    int bookW = books[i][0];
    int bookH = books[i][1];
    int take = INT_MAX, noTake = INT_MAX;
    if (bookW <= remWidth)
    {
        take = solve(i + 1, remWidth - bookW, books, max(maxHeight, bookH), shelfWidth, dp);
    }
    noTake = maxHeight + solve(i + 1, shelfWidth - bookW, books, bookH, shelfWidth, dp);
    return dp[i][remWidth] = min(take, noTake);
}
int minHeightShelves(vector<vector<int>> &books, int shelfWidth)
{
    int n = books.size();
    vector<vector<int>> dp(n + 1, vector<int>(shelfWidth + 1, -1));
    int remWidth = shelfWidth;
    return solve(0, remWidth, books, 0, shelfWidth, dp);
}