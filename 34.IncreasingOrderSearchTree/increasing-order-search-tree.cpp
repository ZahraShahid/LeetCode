// Returns the BST in increasing order
// https://leetcode.com/problems/increasing-order-search-tree/
class Solution
{
    TreeNode *curr = NULL;

public:
    TreeNode *increasingBST(TreeNode *root)
    {
        if (root == NULL)
            return NULL;
        TreeNode *res = new TreeNode(0);
        curr = res;
        inorder(root);
        return res->right;
    }

    void inorder(TreeNode *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        root->left = NULL;
        curr->right = root;
        curr = root;
        inorder(root->right);
    }
};