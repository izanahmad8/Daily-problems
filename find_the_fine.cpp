long long int totalFine(int n, int date, int car[], int fine[])
{
    long long int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (date % 2 == 0 && car[i] % 2 != 0)
        {
            res += fine[i];
        }
        else if (date % 2 != 0 && car[i] % 2 == 0)
        {
            res += fine[i];
        }
    }
    return res;
}