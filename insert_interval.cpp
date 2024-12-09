vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                   vector<int> &newInterval)
{
    intervals.push_back(newInterval);
    sort(intervals.begin(), intervals.end());
    int prev = 0;
    for (int i = 1; i < intervals.size(); i++)
    {
        if (intervals[prev][1] >= intervals[i][0])
        {
            intervals[prev][1] = max(intervals[prev][1], intervals[i][1]);
        }
        else
        {
            prev++;
            intervals[prev] = intervals[i];
        }
    }
    intervals.resize(prev + 1);
    return intervals;
}