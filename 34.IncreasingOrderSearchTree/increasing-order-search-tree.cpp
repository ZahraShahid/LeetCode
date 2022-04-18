// Returns the BST in increasing order
// https://leetcode.com/problems/increasing-order-search-tree/

class Solution
{
public:
    TreeNode *increasingBST(TreeNode *root)
    {
        if (root == NULL)
            return root;
        TreeNode *left_part = increasingBST(root->left);
        root->left = nullptr;
        TreeNode *ans = root;
        if (left_part)
        {
            ans = left_part;
            while (left_part->right)
                left_part = left_part->right;
            left_part->right = root;
        }

        root->right = increasingBST(root->right);
        return ans;
    }
};