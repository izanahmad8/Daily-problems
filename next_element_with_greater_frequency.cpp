vector<int> findGreater(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> mp;
    stack<int> st;
    vector<int> ans(n, -1);
    for (int &ele : arr)
    {
        mp[ele]++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && mp[st.top()] <= mp[arr[i]])
        {
            st.pop();
        }
        if (!st.empty())
        {
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}