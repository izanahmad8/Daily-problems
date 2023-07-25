class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 0, chk = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 32 && chk == 1)
            {
                break;
            }
            else if (s[i] != 32)
            {
                count++;
                chk = 1;
            }
        }
        return count;
    }
};