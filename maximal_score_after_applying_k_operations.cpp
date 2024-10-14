long long maxKelements(vector<int> &nums, int k)
{
    priority_queue<long long> pq(nums.begin(), nums.end());
    long long score = 0;
    while (k--)
    {
        long long ele = pq.top();
        pq.pop();
        score += ele;
        long long newEle = (ele + 2) / 3;
        pq.push(newEle);
    }
    return score;
}