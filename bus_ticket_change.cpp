bool canServe(vector<int> &arr)
{
    int five = 0;
    int ten = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 20)
        {
            if (ten && five)
            {
                ten--;
                five--;
            }
            else if (five >= 3)
            {
                five -= 3;
            }
            else
                return false;
        }
        else if (arr[i] == 10)
        {
            if (five)
            {
                ten++;
                five--;
            }
            else
                return false;
        }
        else
            five++;
    }
    return true;
}