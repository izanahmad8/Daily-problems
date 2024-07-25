Node *solve(vector<int> &nums, int l, int r)
{
    if (l > r)
        return NULL;
    if (l == r)
        return new Node(nums[l]);
    int m = l + (r - l) / 2;
    Node *root = new Node(nums[m]);
    root->left = solve(nums, l, m - 1);
    root->right = solve(nums, m + 1, r);
    return root;
}
Node *sortedArrayToBST(vector<int> &nums)
{
    int l = 0, r = nums.size() - 1;
    return solve(nums, l, r);
}