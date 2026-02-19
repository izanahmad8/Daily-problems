vector<int> missinRange(vector<int> &arr, int low, int high)
{
    unordered_set<int> st;
    vector<int> res;
    for (int &ele : arr)
    {
        st.insert(ele);
    }
    for (int i = low; i <= high; i++)
    {
        if (st.find(i) == st.end())
        {
            res.push_back(i);
        }
    }
    return res;
}