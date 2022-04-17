// Returns the trimmed BST if the range of values of nodes doesnt lie between the high and low values
// https://leetcode.com/problems/trim-a-binary-search-tree/
class Solution
{
public:
    TreeNode *trimBST(TreeNode *root, int low, int high)
    {
        if (root == NULL)
            return NULL;
        if (root->val >= low && root->val <= high)
        {
            root->left = trimBST(root->left, low, high);
            root->right = trimBST(root->right, low, high);
        }
        else if (root->val < low)
        {
            root = trimBST(root->right, low, high);
        }
        else if (root->val > high)
        {
            root = trimBST(root->left, low, high);
        }
        return root;
    }
};