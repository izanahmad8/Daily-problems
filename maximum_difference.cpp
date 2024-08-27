int findMaxDiff(vector<int> &arr)
{
    int n = arr.size();
    vector<int> left(n, 0), right(n, 0);
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && s.top() >= arr[i])
        {
            s.pop();
        }
        if (!s.empty())
        {
            left[i] = s.top();
        }
        s.push(arr[i]);
    }
    while (!s.empty())
    {
        s.pop();
    }
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() >= arr[i])
        {
            s.pop();
        }
        if (!s.empty())
        {
            right[i] = s.top();
        }
        s.push(arr[i]);
    }
    int maxDiff = 0;
    for (int i = 0; i < n; i++)
    {
        int diff = abs(left[i] - right[i]);
        maxDiff = max(maxDiff, diff);
    }
    return maxDiff;
}