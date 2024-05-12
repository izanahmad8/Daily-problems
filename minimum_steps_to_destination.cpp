int minSteps(int d)
{
    int steps = 0;
    int jump = 0;
    while (jump < d || (jump - d) % 2 != 0)
    {
        steps++;
        jump += steps;
    }
    return steps;
}