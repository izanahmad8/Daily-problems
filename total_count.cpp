int totalCount(int k, vector<int> &arr)
{
    int count = 0;
    for (int &num : arr)
    {
        int rem = num % k;
        int divi = num / k;
        count += divi + (rem > 0 ? 1 : 0);
    }
    return count;
}