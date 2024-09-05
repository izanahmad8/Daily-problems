int missingNumber(int n, vector<int> &arr)
{

    int sum = n * (n + 1) / 2; //calculate sum of n numbers
    int s = 0;
    for (int i = 0; i < n - 1; i++)
    {
        s += arr[i];
    }
    return sum - s;
}
