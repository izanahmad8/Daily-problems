int maxDistance(vector<vector<int>> &arrays)
{
    int mini = arrays[0][0];
    int maxi = arrays[0].back();
    int max_dist = 0;
    for (int i = 1; i < arrays.size(); i++)
    {
        max_dist = max(max_dist, abs(arrays[i].back() - mini));
        max_dist = max(max_dist, abs(maxi - arrays[i][0]));
        mini = min(mini, arrays[i][0]);
        maxi = max(maxi, arrays[i].back());
    }
    return max_dist;
}