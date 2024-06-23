int longestSubarray(vector<int> &nums, int limit)
{
    deque<int> maxQ;
    deque<int> minQ;
    int len = 0;
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        while (!maxQ.empty() && nums[j] < maxQ.back())
        {
            maxQ.pop_back();
        }
        maxQ.push_back(nums[j]);
        while (!minQ.empty() && nums[j] > minQ.back())
        {
            minQ.pop_back();
        }
        minQ.push_back(nums[j]);
        while (minQ.front() - maxQ.front() > limit)
        {
            if (nums[i] == minQ.front())
            {
                minQ.pop_front();
            }
            if (nums[i] == maxQ.front())
            {
                maxQ.pop_front();
            }
            ++i;
        }
        len = max(len, j - i + 1);
    }
    return len;
}