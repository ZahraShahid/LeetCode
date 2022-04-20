// Returns the BSTIterator of inorder traversal
// https://leetcode.com/problems/binary-search-tree-iterator/

class BSTIterator
{
    stack<TreeNode *> s;

public:
    BSTIterator(TreeNode *root)
    {
        pushLeft(root);
    }

    void pushLeft(TreeNode *root)
    {
        while (root != NULL)
        {
            s.push(root);
            root = root->left;
        }
    }

    int next()
    {
        TreeNode *t = s.top();
        s.pop();
        pushLeft(t->right);
        return t->val;
    }

    bool hasNext()
    {
        return !s.empty();
    }
};
