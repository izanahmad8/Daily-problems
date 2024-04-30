bool find3Numbers(int A[], int n, int X)
{
    sort(A, A + n);
    int i = 0;
    while (i < n)
    {
        int diff = X - A[i];
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = A[j] + A[k];
            if (sum == diff)
            {
                return true;
            }
            else if (sum < diff)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
        i++;
    }
    return false;
}