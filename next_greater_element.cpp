vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    vector<long long> ans(n, -1);
    stack<long long> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[i] >= st.top())
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