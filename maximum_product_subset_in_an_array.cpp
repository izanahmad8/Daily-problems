const long long int m = 1e9 + 7;
long long int findMaxProduct(vector<int> &arr)
{
    long long int maxProd = 1;
    int neg = 0, zero = 0, negative = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] < 0)
        {
            maxProd = (maxProd * arr[i]) % m;
            neg++;
            negative = max(negative, arr[i]);
        }
        else
        {
            maxProd = (maxProd * arr[i]) % m;
        }
    }
    if (zero == arr.size())
        return 0;
    if (neg == 1 && zero == arr.size() - 1)
        return 0;
    if (neg % 2 == 0)
        return maxProd % m;
    else if (neg % 2 == 1)
        return (maxProd / negative) % m;
}