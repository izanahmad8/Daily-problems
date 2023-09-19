unsigned int getFirstSetBit(int n)
{
    int res = 0;
    unsigned count = 1;
    while (n != 0)
    {
        res = n % 2;
        if (res == 1)
        {
            return count;
        }
        count++;
        n /= 2;
    }
    return 0;
}