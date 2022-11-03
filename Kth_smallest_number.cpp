int kthSmallest(int arr[], int l, int r, int k)
{
    priority_queue<int> p;
    for (int i = 0; i < r + 1; i++)
    {
        p.push(arr[i]);
    }
    while (p.size() > k)
    {
        p.pop();
    }
    int index = p.top();
    return index;
}