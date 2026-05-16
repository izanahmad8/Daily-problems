int findSmallest(vector<int> &arr)
{
    int sum = 1;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] <= sum)
        {
            sum += arr[i];
        }
        else
            break;
    }
    return sum;
}