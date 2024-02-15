int findNumbers(vector<int> &nums)
{
    int count = 0;
    for (auto x : nums)
    {
        if (digit(x))
        {
            count++;
        }
    }
    return count;
}
bool digit(int x)
{
    int count = 0;
    while (x != 0)
    {
        count++;
        x /= 10;
    }
    if (count % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}