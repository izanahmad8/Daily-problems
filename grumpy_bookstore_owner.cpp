int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
{
    int n = customers.size();
    int maxUnsat = 0;
    int currUnsat = 0;
    for (int i = 0; i < minutes; i++)
    {
        if (grumpy[i])
        {
            currUnsat += customers[i];
        }
    }
    maxUnsat = currUnsat;
    int i = 0;
    int j = minutes;
    while (j < n)
    {
        if (grumpy[j])
        {
            currUnsat += customers[j];
        }
        if (grumpy[i])
        {
            currUnsat -= customers[i];
        }
        maxUnsat = max(maxUnsat, currUnsat);
        i++;
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        if (grumpy[i] == 0)
        {
            maxUnsat += customers[i];
        }
    }
    return maxUnsat;
}