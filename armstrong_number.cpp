string armstrongNumber(int n)
{
    int ans = 0;
    int num = n;
    while (n != 0)
    {
        int rem = n % 10;
        ans += rem * rem * rem;
        n /= 10;
    }
    if (ans == num)
        return "true";
    return "false";
}