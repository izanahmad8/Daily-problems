class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        int n = operations.size();
        int sum = 0;
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            int s = res.size();
            if (operations[i] == "C")
            {
                res.pop_back();
                operations[i].erase();
            }
            else if (operations[i] == "D")
            {
                res.push_back(res.back() * 2);
                operations[i].erase();
            }
            else if (operations[i] == "+")
            {
                res.push_back(res[s - 1] + res[s - 2]);
                operations[i].erase();
            }
            else
            {
                res.push_back(stoi(operations[i]));
            }
        }
        for (int i = 0; i < res.size(); i++)
        {
            sum += res[i];
        }
        return sum;
    }
};