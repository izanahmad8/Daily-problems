int rotateDelete(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
        return arr[0];
    if (n % 2 == 0)
    {
        return arr[2 + (n - 2) / 4 - 1];
    }
    return arr[3 + (n - 3) / 4 - 1];
}