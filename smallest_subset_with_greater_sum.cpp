int minSubset(vector<int> &Arr, int N)
{
    sort(Arr.begin(), Arr.end());
    long sum = 0;
    for (auto i : Arr)
    {
        sum += i;
    }
    int count = 0;
    long val = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        if (val > sum)
            break;
        else
        {
            val += Arr[i];
            sum -= Arr[i];
            count++;
        }
    }
    return count;
}