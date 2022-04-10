// Returns the node of the BST with the given key
// https://leetcode.com/problems/search-in-a-binary-search-tree/

class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        while (root)
        {
            if (root->val == val)
                return root;
            else if (root->val > val)
                root = searchBST(root->left, val);
            else
                root = searchBST(root->right, val);
        }
        return root;
    }
};