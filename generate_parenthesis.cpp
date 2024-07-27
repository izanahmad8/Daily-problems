vector<string> res;

void solve(int n, string &chk, int open, int close)
{

    if (chk.size() == 2 * n)
    {
        res.push_back(chk);
        return;
    }

    if (open < n)
    {
        chk.push_back('(');
        solve(n, chk, open + 1, close);
        chk.pop_back();
    }

    if (close < open)
    {
        chk.push_back(')');
        solve(n, chk, open, close + 1);
        chk.pop_back();
    }
}

vector<string> AllParenthesis(int n)
{
    string chk = "";
    solve(n, chk, 0, 0);
    return res;
}