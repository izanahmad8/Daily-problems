int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> p;
    for (auto num : nums)
    {
        p.push(num);
    }
    k--;
    while (k--)
    {
        p.pop();
    }
    return p.top();
}