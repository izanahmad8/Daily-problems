long long minimumSteps(string s)
{
    long long step = 0;
    long long black = 0;
    for (char &ch : s)
    {
        if (ch == '1')
        {
            black++;
        }
        else
        {
            step += black;
        }
    }
    return step;
}