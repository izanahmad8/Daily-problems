int arrangeCoins(int n)
{
    int count = 0;
    int i = 1;
    while (n - i >= 0)
    {
        count++;
        n -= i;
        i++;
    }
    return count;
}