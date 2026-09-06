int longestConsecutive(vector<int> &nums)
{
    unordered_set<int> st(nums.begin(), nums.end());
    int maxLen = 0;
    for (int &x : nums)
    {
        if (!st.contains(x - 1))
        {
            int curr = x;
            int len = 1;
            while (st.contains(curr + 1))
            {
                curr++;
                len++;
            }
            maxLen = max(maxLen, len);
        }
    }
    return maxLen;
}