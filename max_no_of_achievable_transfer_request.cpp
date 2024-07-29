int res = INT_MIN;
void solve(int m, vector<vector<int>> &requests, vector<int> &build, int ind, int count)
{
    if (ind >= m)
    {
        bool zero = true;
        for (auto i : build)
        {
            if (i != 0)
            {
                zero = false;
            }
        }
        if (zero)
        {
            res = max(count, res);
        }
        return;
    }
    build[requests[ind][0]]--;
    build[requests[ind][1]]++;
    solve(m, requests, build, ind + 1, count + 1);
    build[requests[ind][0]]++;
    build[requests[ind][1]]--;
    solve(m, requests, build, ind + 1, count);
}
int maximumRequests(int n, vector<vector<int>> &requests)
{
    vector<int> build(n, 0);
    int m = requests.size();
    solve(m, requests, build, 0, 0);
    return res;
}