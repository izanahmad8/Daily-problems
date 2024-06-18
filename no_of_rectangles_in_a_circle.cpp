int rectanglesInCircle(int r)
{
    int count = 0;
    int d = 2 * r;
    for (int a = 1; a <= d; a++)
    {
        for (int b = 1; b <= d; b++)
        {
            if ((a * a) + (b * b) <= d * d)
            {
                count++;
            }
        }
    }
    return count;
}