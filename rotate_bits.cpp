vector<int> rotate(int n, int d)
{
    int a, b;
    d = d % 16;
    a = (n << d | (n >> (16 - d))) & 0xFFFF;
    b = (n >> d | (n << (16 - d))) & 0xFFFF;
    return {a, b};
}