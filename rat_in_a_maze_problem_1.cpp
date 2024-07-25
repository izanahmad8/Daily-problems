vector<string> res;
bool isSafe(int i, int j, int n)
{
    return i >= 0 && i < n && j >= 0 && j < n;
}
void solve(int i, int j, vector<vector<int>> &mat, string &path, int n)
{
    if (!isSafe(i, j, n) || mat[i][j] == 0)
    {
        return;
    }
    if (i == n - 1 && j == n - 1)
    {
        res.push_back(path);
        return;
    }
    mat[i][j] = 0;

    path.push_back('L');
    solve(i, j - 1, mat, path, n);
    path.pop_back();

    path.push_back('R');
    solve(i, j + 1, mat, path, n);
    path.pop_back();

    path.push_back('U');
    solve(i - 1, j, mat, path, n);
    path.pop_back();

    path.push_back('D');
    solve(i + 1, j, mat, path, n);
    path.pop_back();

    mat[i][j] = 1;
}
vector<string> findPath(vector<vector<int>> &mat)
{
    string path = "";
    int n = mat.size();
    solve(0, 0, mat, path, n);
    return res;
}