vector<int> makeBeautiful(vector<int> arr)
{
    vector<int> st;
    for (int ele : arr)
    {
        if (!st.empty() && ((st.back() >= 0 && ele < 0) ||
                            (st.back() < 0 && ele >= 0)))
        {
            st.pop_back();
        }
        else
        {
            st.push_back(ele);
        }
    }
    return st;
}