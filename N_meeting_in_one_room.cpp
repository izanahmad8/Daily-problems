int maxMeetings(int n, int start[], int end[])
{
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++)
    {
        vec.push_back({end[i], start[i]});
    }
    sort(vec.begin(), vec.end());
    int count = 0;
    int endTime = -1;
    for (auto i : vec)
    {
        if (i.second > endTime)
        {
            endTime = i.first;
            count++;
        }
    }
    return count;
}