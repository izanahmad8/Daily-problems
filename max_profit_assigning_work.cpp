int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit, vector<int> &worker)
{
    int n = difficulty.size();
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = {difficulty[i], profit[i]};
    }
    sort(v.begin(), v.end());
    sort(worker.begin(), worker.end());
    int maxProfit = 0;
    int gain = 0;
    int j = 0;
    for (int i = 0; i < worker.size(); i++)
    {
        while (j < n && worker[i] >= v[j].first)
        {
            maxProfit = max(maxProfit, v[j].second);
            j++;
        }
        gain += maxProfit;
    }
    return gain;
}