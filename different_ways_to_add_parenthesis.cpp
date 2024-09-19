unordered_map<string, vector<int>> dp;
vector<int> diffWaysToCompute(string expression)
{
    vector<int> res;
    if (dp.find(expression) != dp.end())
    {
        return dp[expression];
    }
    for (int i = 0; i < expression.size(); i++)
    {
        if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*')
        {
            vector<int> left_result = diffWaysToCompute(expression.substr(0, i));
            vector<int> right_result = diffWaysToCompute(expression.substr(i + 1));
            for (int a : left_result)
            {
                for (int b : right_result)
                {
                    if (expression[i] == '+')
                    {
                        res.push_back(a + b);
                    }
                    else if (expression[i] == '-')
                    {
                        res.push_back(a - b);
                    }
                    else if (expression[i] == '*')
                    {
                        res.push_back(a * b);
                    }
                }
            }
        }
    }
    if (res.empty())
    {
        res.push_back(stoi(expression));
    }
    dp[expression] = res;
    return res;
}