int setBits(int N)
{
    int bit = 0;
    while (N != 0)
    {
        if (N % 2 == 1)
        {
            bit++;
        }
        N = N / 2;
    }
    return bit;
}