// Returns the postorder traversal of a binary tree
// https://leetcode.com/problems/binary-tree-postorder-traversal/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    void postorderTraversalS(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
            return;
        postorderTraversalS(root->left, v);
        postorderTraversalS(root->right, v);
        v.push_back(root->val);
    }

public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> v;
        postorderTraversalS(root, v);
        return v;
    }
};