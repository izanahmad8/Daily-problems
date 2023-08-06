int convertFive(int n)
{
    int res = 0, ans = 0;
    while (n != 0)
    {
        int temp = n % 10;
        if (temp == 0)
        {
            temp = 5;
        }
        res = res * 10 + temp;
        n /= 10;
    }
    while (res != 0)
    {
        int d = res % 10;
        ans = ans * 10 + d;
        res /= 10;
    }
    return ans;
}