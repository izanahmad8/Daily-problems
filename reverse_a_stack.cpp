class Solution
{
public:
    void Reverse(stack<int> &St)
    {
        stack<int> temp;
        while (St.empty() == 0)
        {
            temp.push(St.top());
            St.pop();
        }
        St = temp;
    }
};