vector<int> removeDuplicate(vector<int> &arr)
{
    unordered_set<int> st;
    vector<int> ans;
    for (int &x : arr)
    {
        if (st.find(x) != st.end())
            continue;
        ans.push_back(x);
        st.insert(x);
    }
    return ans;
}