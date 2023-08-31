queue<int> _push(int arr[], int n)
{
    queue<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(arr[i]);
    }
    return s;
}

void _pop(queue<int> s)
{
    if (s.empty())
    {
        return;
    }
    while (!s.empty())
    {
        cout << s.front() << " ";
        s.pop();
    }
}