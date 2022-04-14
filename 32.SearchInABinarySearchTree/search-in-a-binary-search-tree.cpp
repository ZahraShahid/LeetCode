// Returns the node of the tree with the given value.
// https://leetcode.com/problems/search-in-a-binary-search-tree/
class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        TreeNode *curr = root;
        while (curr)
        {
            if (curr->val == val)
                return curr;
            else if (curr->val > val)
                curr = searchBST(curr->left, val);
            else
                curr = searchBST(curr->right, val);
        }
        return curr;
    }
};