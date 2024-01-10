int maxProfit(vector<int> &prices)
{
    int profit = 0, minSofar = prices[0];
    int n = prices.size();
    for (int i = 1; i < n; i++)
    {
        minSofar = min(minSofar, prices[i]);
        profit = max(profit, prices[i] - minSofar);
    }
    return profit;
}