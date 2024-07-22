class NodeVal
{
public:
    int minVal, maxVal, maxSize;
    NodeVal(int minVal, int maxVal, int maxSize)
    {
        this->minVal = minVal;
        this->maxVal = maxVal;
        this->maxSize = maxSize;
    }
};

class Solution
{
private:
    NodeVal helper(Node *root)
    {
        if (!root)
            return NodeVal(INT_MAX, INT_MIN, 0);
        auto left = helper(root->left);
        auto right = helper(root->right);
        if (left.maxVal < root->data && right.minVal > root->data)
        {
            return NodeVal(min(root->data, left.minVal), max(root->data, right.maxVal), 1 + left.maxSize + right.maxSize);
        }
        else
        {
            return NodeVal(INT_MIN, INT_MAX, max(left.maxSize, right.maxSize));
        }
    }

public:
    int largestBst(Node *root)
    {
        return helper(root).maxSize;
    }
};