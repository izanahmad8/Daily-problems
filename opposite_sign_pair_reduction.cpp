vector<int> reducePairs(vector<int> &arr)
{
    vector<int> st;
    for (int ele : arr)
    {
        while (!st.empty() && st.back() * ele < 0)
        {
            if (abs(st.back()) < abs(ele))
            {
                st.pop_back();
            }
            else if (abs(st.back()) > abs(ele))
            {
                ele = st.back();
                st.pop_back();
            }
            else
            {
                st.pop_back();
                ele = 0;
                break;
            }
        }
        if (ele != 0)
        {
            st.push_back(ele);
        }
    }
    return st;
}