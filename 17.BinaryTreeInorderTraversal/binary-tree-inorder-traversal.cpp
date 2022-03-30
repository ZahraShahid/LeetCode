// Returns inorder traversal of a binary tree
// https://leetcode.com/problems/binary-tree-inorder-traversal/

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
class Solution {
public: 
    void inorderTraversalV(TreeNode* root, vector<int> &v){
         if(root == NULL)
            return;
        inorderTraversalV(root->left,v);
        v.push_back(root->val);
        inorderTraversalV(root->right,v);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inorderTraversalV(root,v);
        return v;
    }
};