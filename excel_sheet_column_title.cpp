string convertToTitle(int columnNumber)
{
    string ans;
    while (columnNumber > 0)
    {
        columnNumber--;
        int temp = columnNumber % 26;
        columnNumber = columnNumber / 26;
        ans.push_back('A' + temp);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}