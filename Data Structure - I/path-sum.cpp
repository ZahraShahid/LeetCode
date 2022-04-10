// Returns if the targetSum is present in the tree from the root to the leaf node.
// https://leetcode.com/problems/path-sum/

class Solution
{
public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        if (root == NULL)
            return false;
        else if (root->left == NULL && root->right == NULL && targetSum - root->val == 0)
            return true;
        else
            return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
};