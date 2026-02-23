vector<int> findUnion(vector<int> &a, vector<int> &b)
{
    unordered_set<int> st;
    for (int &ele : a)
    {
        st.insert(ele);
    }
    for (int &ele : b)
    {
        st.insert(ele);
    }
    vector<int> res(st.begin(), st.end());
    return res;
}