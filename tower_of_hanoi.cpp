long long result = 0;
long long toh(int N, int from, int to, int aux)
{
    if (N == 0)
    {
        return result;
    }
    toh((N - 1), from, aux, to);
    cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
    result++;
    toh((N - 1), aux, to, from);
}