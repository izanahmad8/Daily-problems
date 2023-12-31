int toyCount(int N, int K, vector<int> arr)
{
    int count = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < N; i++)
    {
        if (arr[i] <= K)
        {
            count++;
            K = K - arr[i];
        }
    }
    return count;
}