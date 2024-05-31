int swapNibbles(int n)
{
    int left = n >> 4;
    int right = n & 15;
    return (right * 16 + left);
}