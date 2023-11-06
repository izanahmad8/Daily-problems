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