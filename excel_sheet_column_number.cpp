int titleToNumber(string columnTitle)
{
    int res = 0;
    for (char c : columnTitle)
    {
        int sheet = c - 'A' + 1;
        res = res * 26 + sheet;
    }
    return res;
}