int countgroup(vector<int> &arr)
{
    int XOR = 0;
    int n = arr.size();
    for (int &num : arr)
    {
        XOR ^= num;
    }
    int ans = pow(2, n - 1);
    return XOR == 0 ? ans - 1 : 0;
}