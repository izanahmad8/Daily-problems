int maxDistance(vector<int> &position, int m)
{
    sort(position.begin(), position.end());
    int res = 0;
    int l = 1;
    int r = position[position.size() - 1] - position[0];
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (put(position, m, mid))
        {
            res = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return res;
}
bool put(vector<int> &position, int m, int mid)
{
    int countBall = 1;
    int lastPlace = position[0];
    for (int i = 1; i < position.size(); i++)
    {
        if (position[i] - lastPlace >= mid)
        {
            countBall++;
            lastPlace = position[i];
        }
        if (countBall >= m)
        {
            return true;
        }
    }
    return false;
}