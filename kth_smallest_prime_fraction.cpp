vector<int> kthSmallestPrimeFraction(vector<int> &arr, int k)
{
    priority_queue<vector<double>> pq; //{frac,arr[i],arr[j]}
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double frac = (double)arr[i] / arr[j];
            pq.push(vector<double>{frac, (double)arr[i], (double)arr[j]});
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
    }
    vector<int> res(2);
    auto vec = pq.top();
    res[0] = vec[1];
    res[1] = vec[2];
    return res;
}