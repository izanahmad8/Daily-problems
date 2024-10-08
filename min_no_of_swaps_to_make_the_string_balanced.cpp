int minSwaps(string s)
{
    int count = 0;
    for (char &ch : s)
    {
        if (ch == '[')
        {
            count++;
        }
        else if (count)
        {
            count--;
        }
    }
    return (count + 1) / 2;
}