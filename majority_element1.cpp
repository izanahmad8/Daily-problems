class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int major = 0, index = 0;
        unordered_map<int, int> m;
        for (auto i : nums)
        {
            m[i]++;
        }
        for (auto i : m)
        {
            if (i.second > major)
            {
                major = i.second;
                index = i.first;
            }
        }
        return index;
    }
};