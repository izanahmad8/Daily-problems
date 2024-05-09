long long maximumHappinessSum(vector<int> &happiness, int k)
{
    sort(happiness.begin(), happiness.end(), greater<int>());
    int n = happiness.size();
    long long ans = happiness[0];
    for (int i = 1; i < k; i++)
    {
        if (happiness[i] - i < 0)
        {
            break;
        }
        ans += happiness[i] - i;
    }
    return ans;
}