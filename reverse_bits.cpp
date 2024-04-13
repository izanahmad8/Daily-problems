unsigned int reverseBits(unsigned int n)
{
    unsigned int bin;
    while (n > 0)
    {
        bin = bin << 1;
        bin = bin | (n & 1);
        n = n >> 1;
    }
    return bin;
}

long long reversedBits(long long x)
{
    long long int ans = 0, totalBit = 32;
    while (totalBit--)
    {
        ans <<= 1;
        ans |= (x & 1);
        x >>= 1;
    }
    return ans;
}