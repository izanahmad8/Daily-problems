void sort012(vector<int> &arr)
{
    int zero = 0, one = 0, two = 0;
    for (int &ele : arr)
    {
        if (ele == 0)
            zero++;
        else if (ele == 1)
            one++;
        else
            two++;
    }
    int i = 0;
    while (zero--)
    {
        arr[i++] = 0;
    }
    while (one--)
    {
        arr[i++] = 1;
    }
    while (two--)
    {
        arr[i++] = 2;
    }
}