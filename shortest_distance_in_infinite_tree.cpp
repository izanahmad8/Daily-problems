int distance(int X, int Y)
{
    if (X == Y)
        return 0;
    int dist = 0;
    while (X != Y)
    {
        if (X > Y)
        {
            X /= 2;
        }
        else
        {
            Y /= 2;
        }
        dist++;
    }
    return dist;
}