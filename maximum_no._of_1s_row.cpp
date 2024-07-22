int maxOnes(vector<vector<int>> &Mat, int N, int M)
{
    int maxRow = INT_MIN;
    int maxCount = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        int low = 0, high = M - 1;
        int count = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (Mat[i][mid] == 1)
            {
                count = M - mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxRow = i;
        }
    }
    return maxRow;
}