class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> freq(n + 1, 0);
        vector<int> v;
        for (auto i : nums)
        {
            freq[i]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (!freq[i])
            {
                v.push_back(i);
            }
        }
        return v;
    }
};