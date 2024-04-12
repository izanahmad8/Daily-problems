int PalinArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (!palindrome(a[i]))
        {
            return 0;
        }
    }
    return 1;
}
bool palindrome(int i)
{
    int rev = 0;
    int num = i;
    while (num != 0)
    {
        int temp = num % 10;
        rev = temp + rev * 10;
        num /= 10;
    }
    return i == rev;
}