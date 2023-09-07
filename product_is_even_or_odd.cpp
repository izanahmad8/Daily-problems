int EvenOdd(string n1, string n2)
{
    int res = n1[n1.size() - 1] - '0', res2 = n2[n2.size() - 1] - '0';
    if ((res * res2) % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}