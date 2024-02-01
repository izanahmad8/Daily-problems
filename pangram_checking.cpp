bool checkPangram(string s)
{
    int visited[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        visited[tolower(s[i]) - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (visited[i] < 1)
        {
            return false;
        }
    }
    return true;
}