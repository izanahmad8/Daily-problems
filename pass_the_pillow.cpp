int passThePillow(int n, int time)
{
    int cycle = time / (n - 1);
    int rem = time % (n - 1);
    return cycle % 2 ? n - rem : rem + 1;
}