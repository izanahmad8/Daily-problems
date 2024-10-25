bool compare(string root, string curr)
{
    root.push_back('/');
    for (int i = 0; i < root.size(); i++)
    {
        if (root[i] != curr[i])
        {
            return true;
        }
    }
    return false;
}
vector<string> removeSubfolders(vector<string> &folder)
{
    sort(folder.begin(), folder.end());
    vector<string> ans;
    ans.push_back(folder[0]);
    for (int i = 1; i < folder.size(); i++)
    {
        string curr = folder[i];
        if (compare(ans.back(), curr))
        {
            ans.push_back(curr);
        }
    }
    return ans;
}