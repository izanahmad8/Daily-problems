Node *createTree(vector<int> parent)
{
    unordered_map<int, vector<int>> mp;
    int rootValue;
    for (int i = 0; i < parent.size(); i++)
    {
        mp[parent[i]].push_back(i);
        if (parent[i] == -1)
        {
            rootValue = i;
        }
    }
    Node *root = new Node(rootValue);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (mp.find(node->data) != mp.end())
        {
            vector<int> child = mp[node->data];
            Node *lnode = new Node(child[0]);
            node->left = lnode;
            q.push(lnode);
            if (child.size() > 1)
            {
                Node *rnode = new Node(child[1]);
                node->right = rnode;
                q.push(rnode);
            }
        }
    }
    return root;
}