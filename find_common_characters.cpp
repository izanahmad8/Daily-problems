void fill(string word, vector<int> &count)
{
    for (char &c : word)
    {
        count[c - 'a']++;
    }
}
vector<string> commonChars(vector<string> &words)
{
    vector<int> count(26, 0);
    vector<string> ans;
    fill(words[0], count);
    for (int i = 1; i < words.size(); i++)
    {
        vector<int> temp(26, 0);
        fill(words[i], temp);
        for (int j = 0; j < 26; j++)
        {
            count[j] = min(count[j], temp[j]);
        }
    }
    for (int i = 0; i < 26; i++)
    {
        int j = count[i];
        while (j--)
        {
            ans.push_back(string(1, i + 'a'));
        }
    }
    return ans;
}