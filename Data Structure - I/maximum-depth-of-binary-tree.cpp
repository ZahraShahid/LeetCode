// Returns the maximum depth of a binary tree
// https://leetcode.com/problems/maximum-depth-of-binary-tree/

class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int leftD = maxDepth(root->left);
        int rightD = maxDepth(root->right);
        return max(leftD, rightD) + 1;
    }
};