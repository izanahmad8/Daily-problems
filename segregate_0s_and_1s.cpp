void segregate0and1(vector<int> &arr)
{
    int zero = 0;
    int one = 0;
    for (auto i : arr)
    {
        if (i == 0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    if (zero == 0 || one == 0)
        return;
    for (int i = 0; i < zero; i++)
    {
        arr[i] = 0;
    }
    for (int i = zero; i < arr.size(); i++)
    {
        arr[i] = 1;
    }
}