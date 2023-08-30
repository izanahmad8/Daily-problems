int kthDigit(int A, int B, int K)
{
    long long int p = pow(A, B), res = 0;
    while (K--)
    {
        res = p % 10;
        p /= 10;
    }
    return res;
}