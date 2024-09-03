int getLucky(string s, int k)
{
    string num = "";
    for (char &ch : s)
    {
        num += to_string(ch - 'a' + 1);
    }
    while (k--)
    {
        int temp = 0;
        for (char &ch : num)
        {
            temp += ch - '0';
        }
        num = to_string(temp);
    }
    return stoi(num);
}