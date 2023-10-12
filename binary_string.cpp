long binarySubstring(int n, string a)
{
    long ans = 0, count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '1')
        {
            ans += count;
            count++;
        }
    }
    return ans;
}