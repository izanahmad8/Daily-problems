int threeSumClosest(vector<int> arr, int target)
{
    int diff = INT_MAX;
    int ans = INT_MIN;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 2; i++)
    {
        int j = i + 1;
        int k = arr.size() - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == target)
            {
                return sum;
            }
            else if (sum > target)
            {
                k--;
            }
            else
            {
                j++;
            }
            if (abs(sum - target) < diff)
            {
                diff = abs(sum - target);
                ans = sum;
            }
            else if (abs(sum - target) == diff)
            {
                ans = max(ans, sum);
            }
        }
    }
    return ans;
}