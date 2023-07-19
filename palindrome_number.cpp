class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        long long res = 0;
        long long temp = x;
        while (temp != 0)
        {
            int a = temp % 10;
            res = res * 10 + a;
            temp = temp / 10;
        }
        return (res == x);
    }
};