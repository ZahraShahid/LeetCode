// Returns the bst after summing all the nodes greater than the given node
// https://leetcode.com/problems/convert-bst-to-greater-tree/

class Solution
{
private:
    int sum = 0;

public:
    TreeNode *convertBST(TreeNode *root)
    {
        if (root != NULL)
        {
            convertBST(root->right);
            sum += root->val;
            root->val = sum;
            convertBST(root->left);
        }
        return root;
    }
};