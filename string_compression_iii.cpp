string compressedString(string word)
{
    string comp;
    int cnt = 1;
    for (int i = 1; i < word.size(); i++)
    {
        if (cnt == 9)
        {
            comp += to_string(cnt) + word[i - 1];
            cnt = 1;
            continue;
        }
        if (word[i] == word[i - 1])
        {
            cnt++;
        }
        else
        {
            comp += to_string(cnt) + word[i - 1];
            cnt = 1;
        }
    }
    comp += to_string(cnt) + word.back();
    return comp;
}