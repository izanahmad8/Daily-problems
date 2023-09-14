int findSum(int arr[], int n)
{
    int sum = 0;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        sum += *it;
    }
    return sum;
}