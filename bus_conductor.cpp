int findMoves(int n, vector<int> chairs, vector<int> passengers)
{
    int ans = 0;
    sort(chairs.begin(), chairs.end());
    sort(passengers.begin(), passengers.end());
    for (int i = 0; i < chairs.size(); i++)
    {
        int diff = abs(passengers[i] - chairs[i]);
        ans += diff;
    }
    return ans;
}