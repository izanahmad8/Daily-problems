int minimumTime(int N, int cur, vector<int> &pos, vector<int> &time)
{
    int min = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        int totalTime = abs((cur - pos[i]) * time[i]);
        if (totalTime < min)
        {
            min = totalTime;
        }
    }
    return min;
}