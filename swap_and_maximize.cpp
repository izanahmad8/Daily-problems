long long maxSum(vector<int> &arr)
{
    long long int sum = 0;
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        sum += abs(arr[i] - arr[j]) + abs(arr[i + 1] - arr[j]);
        i++;
        j--;
    }
    sum += abs(arr[i] - arr[0]);
    return sum;
}