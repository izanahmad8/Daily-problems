vector<int> minPartition(int N)
{
    vector<int> coins{2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    vector<int> ans;
    for (auto i : coins)
    {
        while (N >= i)
        {
            ans.push_back(i);
            N -= i;
        }
    }
    return ans;
}