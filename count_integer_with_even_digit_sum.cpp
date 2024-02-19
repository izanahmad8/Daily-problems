int countEven(int num)
{
    int count = 0;
    for (int i = 2; i <= num; i++)
    {
        if (digitSum(i))
        {
            count++;
        }
    }
    return count;
}
bool digitSum(int i)
{
    int sum = 0;
    while (i != 0)
    {
        sum += i % 10;
        i /= 10;
    }
    if (sum % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}