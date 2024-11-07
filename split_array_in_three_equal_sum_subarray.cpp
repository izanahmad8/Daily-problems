vector<int> findSplit(vector<int> &arr)
{
    int sum = accumulate(arr.begin(), arr.end(), 0);
    if (sum % 3 != 0)
        return {-1, -1};
    int i = -1, j = -1, count = 0;
    int p_sum = 0;
    int target = sum / 3;
    for (int k = 0; k < arr.size(); k++)
    {
        p_sum += arr[k];
        if (p_sum == target)
        {
            if (count == 0)
            {
                i = k;
                count++;
            }
            else if (count == 1)
            {
                j = k;
                count++;
                break;
            }
            p_sum = 0;
        }
    }
    if (count == 2 && i != -1 && j != -1)
    {
        return {i, j};
    }
    return {-1, -1};
}