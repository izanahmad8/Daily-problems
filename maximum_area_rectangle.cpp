int calculate_Area(vector<pair<int, int>> &rect, int N)
{
    int maxi = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        maxi = max(maxi, rect[i].first * rect[i].second);
    }
    return maxi;
}