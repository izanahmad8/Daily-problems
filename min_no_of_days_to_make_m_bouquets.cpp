int minDays(vector<int> &bloomDay, int m, int k)
{
    int res = -1;
    int start = *min_element(bloomDay.begin(), bloomDay.end());
    int end = *max_element(bloomDay.begin(), bloomDay.end());
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (make(mid, k, bloomDay) >= m)
        {
            res = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return res;
}
int make(int mid, int k, vector<int> &bloomDay)
{
    int kCount = 0;
    int count = 0;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] <= mid)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count == k)
        {
            kCount++;
            count = 0;
        }
    }
    return kCount;
}