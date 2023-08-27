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