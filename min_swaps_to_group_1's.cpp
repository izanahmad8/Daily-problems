int minSwaps(vector<int> &arr)
{
    int totalOne = 0;
    for (int x : arr)
    {
        if (x == 1)
        {
            totalOne++;
        }
    }
    if (totalOne == 0)
        return -1;
    int win = totalOne;
    int oneCount = 0;
    for (int i = 0; i < win; i++)
    {
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    int minSwap = win - oneCount;
    for (int i = win; i < arr.size(); i++)
    {
        if (arr[i - win] == 1)
        {
            oneCount--;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
        minSwap = min(minSwap, win - oneCount);
    }
    return minSwap;
}