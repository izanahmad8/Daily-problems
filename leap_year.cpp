int isLeap(int N)
{
    if (N % 4 == 0 && N % 100 != 0 || N % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}