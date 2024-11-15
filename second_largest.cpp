int getSecondLargest(vector<int> &arr)
{
    int largest = *max_element(arr.begin(), arr.end());
    int ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > ans && arr[i] != largest)
        {
            ans = arr[i];
        }
    }
    return ans;
}