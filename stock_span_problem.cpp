vector<int> calculateSpan(int price[], int n)
{
    vector<int> ans;
    stack<pair<int, int>> st;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (!st.empty() && price[i] >= st.top().first)
        {
            count += st.top().second;
            st.pop();
        }
        st.push({price[i], count});
        ans.push_back(count);
    }
    return ans;
}