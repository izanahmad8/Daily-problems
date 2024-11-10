vector<int> findUnion(vector<int> &a, vector<int> &b)
{
    set<int> st(a.begin(), a.end());
    for (int &x : b)
    {
        st.insert(x);
    }
    vector<int> res(st.begin(), st.end());
    return res;
}