vector<int> preOrder(Node *root)
{
    if (!root)
        return {};
    vector<int> ans;
    stack<Node *> st;
    st.push(root);
    while (!st.empty())
    {
        Node *top = st.top();
        st.pop();
        ans.push_back(top->data);
        if (top->right)
        {
            st.push(top->right);
        }
        if (top->left)
        {
            st.push(top->left);
        }
    }
    return ans;
}