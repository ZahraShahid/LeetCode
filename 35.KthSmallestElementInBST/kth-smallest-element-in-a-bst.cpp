// Returns the kth smallest element in a BST
// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

class Solution
{
public:
    void inorder(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
            return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }

public:
    int kthSmallest(TreeNode *root, int k)
    {
        vector<int> v;
        inorder(root, v);
        return v[k - 1];
    }
};