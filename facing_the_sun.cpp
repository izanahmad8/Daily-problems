int countBuildings(vector<int> &height)
{
    int maxi = height[0];
    int count = 1;
    for (int i = 1; i < height.size(); i++)
    {
        if (height[i] > maxi)
        {
            count++;
            maxi = height[i];
        }
    }
    return count;
}