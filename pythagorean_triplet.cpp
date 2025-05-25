bool pythagoreanTriplet(vector<int> &arr)
{
    unordered_set<int> st;
    for (int &ele : arr)
    {
        st.insert(ele * ele);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (st.find(arr[i] * arr[i] + arr[j] * arr[j]) != st.end())
            {
                return true;
            }
        }
    }
    return false;
}