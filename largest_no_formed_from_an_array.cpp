string printLargest(int n, vector<string> &arr)
{
    sort(arr.begin(), arr.end(), compare);
    string res;
    for (int i = 0; i < n; i++)
    {
        res += arr[i];
    }
    return res;
}
static bool compare(const string a, const string b)
{
    return a + b > b + a;
}