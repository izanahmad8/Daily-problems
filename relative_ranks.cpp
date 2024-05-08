vector<string> findRelativeRanks(vector<int> &score)
{
    vector<int> rank = score;
    sort(rank.begin(), rank.end(), greater<int>());
    vector<string> ans;
    vector<string> medal = {"Gold Medal", "Silver Medal", "Bronze Medal"};
    unordered_map<int, string> mp;
    for (int i = 0; i < rank.size(); i++)
    {
        if (i < 3)
        {
            mp[rank[i]] = medal[i];
        }
        else
        {
            mp[rank[i]] = to_string(i + 1);
        }
    }
    for (auto it : score)
    {
        ans.push_back(mp[it]);
    }
    return ans;
}