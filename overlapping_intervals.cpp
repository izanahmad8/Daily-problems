vector<vector<int>> mergeOverlap(vector<vector<int>> &arr)
{
    sort(begin(arr), end(arr));
    vector<vector<int>> res;
    res.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++)
    {
        vector<int> &last = res.back();
        vector<int> &curr = arr[i];
        if (curr[0] <= last[1])
        {
            last[1] = max(curr[1], last[1]);
        }
        else
        {
            res.push_back(curr);
        }
    }
    return res;
}