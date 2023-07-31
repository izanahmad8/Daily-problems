class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        map<int, int> m;
        for (auto i : nums)
        {
            m[i]++;
        }
        for (auto j : m)
        {
            return j.first;
        }
        return -1;
    }
};