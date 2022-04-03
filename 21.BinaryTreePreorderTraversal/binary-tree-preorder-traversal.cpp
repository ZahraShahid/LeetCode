// Returns preorder traversal of binary tree
// https://leetcode.com/problems/binary-tree-preorder-traversal/

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
    void preorderTraversalS(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
            return;
        else
        {
            v.push_back(root->val);
            preorderTraversalS(root->left, v);
            preorderTraversalS(root->right, v);
        }
    }

public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> v;
        preorderTraversalS(root, v);
        return v;
    }
};