void increase(vector<int> &rating, int &count)
{
    int n = rating.size();
    for (int j = 1; j < n - 1; j++)
    {
        int l_count = 0;
        int r_count = 0;
        for (int i = 0; i < j; i++)
        {
            if (rating[i] < rating[j])
            {
                l_count++;
            }
        }
        for (int k = j + 1; k < n; k++)
        {
            if (rating[k] > rating[j])
            {
                r_count++;
            }
        }
        count += l_count * r_count;
    }
}
void decrease(vector<int> &rating, int &count)
{
    int n = rating.size();
    for (int j = 1; j < n - 1; j++)
    {
        int l_count = 0;
        int r_count = 0;
        for (int i = 0; i < j; i++)
        {
            if (rating[i] > rating[j])
            {
                l_count++;
            }
        }
        for (int k = j + 1; k < n; k++)
        {
            if (rating[k] < rating[j])
            {
                r_count++;
            }
        }
        count += l_count * r_count;
    }
}
int numTeams(vector<int> &rating)
{
    int count = 0;
    increase(rating, count);
    decrease(rating, count);
    return count;
}