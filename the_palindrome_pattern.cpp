bool isPalindrome(string s)
{
    string str = s;
    reverse(str.begin(), str.end());
    return str == s;
}
string pattern(vector<vector<int>> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        string temp;
        for (int j = 0; j < n; j++)
        {
            temp += to_string(arr[i][j]);
        }
        if (isPalindrome(temp))
        {
            return to_string(i) + " R";
        }
    }
    for (int i = 0; i < n; i++)
    {
        string temp;
        for (int j = 0; j < n; j++)
        {
            temp += to_string(arr[j][i]);
        }
        if (isPalindrome(temp))
        {
            return to_string(i) + " C";
        }
    }
    return "-1";
}