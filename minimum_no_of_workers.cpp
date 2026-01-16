int minMen(vector<int> &arr)
{
    int n = arr.size();
    vector<int> maxReach(n, -1);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
            continue;

        int left = max(0, i - arr[i]);
        int right = min(n - 1, i + arr[i]);
        maxReach[left] = max(maxReach[left], right);
    }

    int count = 0;
    int currentEnd = -1;
    int farthest = -1;

    for (int i = 0; i < n; i++)
    {

        if (maxReach[i] != -1)
        {
            farthest = max(farthest, maxReach[i]);
        }

        if (i > currentEnd + 1)
            return -1;

        if (i == currentEnd + 1)
        {
            count++;
            currentEnd = farthest;
        }

        if (currentEnd >= n - 1)
            return count;
    }

    return -1;
}