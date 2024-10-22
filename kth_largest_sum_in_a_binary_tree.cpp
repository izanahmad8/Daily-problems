long long kthLargestLevelSum(TreeNode *root, int k)
{
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        long long sum = 0;
        while (n--)
        {
            TreeNode *temp = q.front();
            q.pop();
            sum += temp->val;
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        pq.push(sum);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    return pq.size() < k ? -1 : pq.top();
}