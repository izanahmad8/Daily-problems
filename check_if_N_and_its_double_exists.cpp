bool checkIfExist(vector<int> &arr)
{
    unordered_set<int> st;
    for (int &x : arr)
    {
        if (st.count(x * 2) || (x % 2 == 0 && st.count(x / 2)))
        {
            return true;
        }
        st.insert(x);
    }
    return false;
}