bool judgeSquareSum(int c)
{
    long a = 0;
    long b = sqrt(c);
    while (a <= b)
    {
        long sum = a * a + b * b;
        if (sum == c)
            return true;
        if (sum < c)
        {
            a++;
        }
        else
        {
            b--;
        }
    }
    return false;
}