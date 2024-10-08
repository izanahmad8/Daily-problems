int pairsum(vector<int> &arr)
{
    int n1 = *max_element(arr.begin(), arr.end());
    int n2 = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != n1 && arr[i] > n2)
        {
            n2 = arr[i];
        }
    }
    return n1 + n2;
}