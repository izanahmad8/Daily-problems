void threeWayPartition(vector<int> &array, int a, int b)
{
    int low = 0, high = array.size() - 1;
    int mid = 0;
    while (mid <= high)
    {
        if (array[mid] < a)
        {
            swap(array[mid++], array[low++]);
        }
        else if (array[mid] > b)
        {
            swap(array[mid], array[high--]);
        }
        else
        {
            mid++;
        }
    }
}