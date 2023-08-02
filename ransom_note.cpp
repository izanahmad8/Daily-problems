class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int j = 0;
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        for (int i = 0; i < magazine.size(); i++)
        {
            if (ransomNote[j] == magazine[i])
            {
                j++;
            }
        }
        return {j == ransomNote.size()};
    }
};