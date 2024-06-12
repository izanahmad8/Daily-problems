int countNumberswith4(int N)
{
    int count = 0;
    for (int i = 4; i <= N; i++)
    {
        int temp = i;
        while (temp)
        {
            if (temp % 10 == 4)
            {
                count++;
                break;
            }
            temp /= 10;
        }
    }
    return count;
}
int countNumberswith4(int n)
{
    int count = 0;
    int num = 4;
    for (int i = 4; i <= n; i++)
    {
        if (contain(i, num))
        {
            count++;
        }
    }
    return count;
}
bool contain(int n, int num)
{
    while (n != 0)
    {
        int rem = n % 10;
        if (rem == num)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}