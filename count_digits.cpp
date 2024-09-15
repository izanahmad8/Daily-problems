int evenlyDivides(int N)
{
    int count = 0;
    int num = N;
    while (num != 0)
    {
        int temp = num % 10;
        if (temp > 0 && N % temp == 0)
        {
            count++;
        }
        num /= 10;
    }
    return count;
}