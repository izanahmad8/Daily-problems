int isPrefixOfWord(string sentence, string searchWord)
{
    stringstream str(sentence);
    string word;
    int i = 1;
    while (str >> word)
    {
        if (word.find(searchWord) == 0)
        {
            return i;
        }
        i++;
    }
    return -1;
}