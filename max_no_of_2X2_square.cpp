long long int numberOfSquares(long long int base)
{
    long long int n = (base / 2) - 1;
    return (n * (n + 1)) / 2;
}