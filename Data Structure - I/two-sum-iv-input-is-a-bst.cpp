// Returns if the two nodes are equal to the given target in BST
// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

class Solution
{
public:
    bool dfs(TreeNode *root, int k, unordered_set<int> &s)
    {
        if (root == NULL)
            return false;
        if (s.count(k - root->val))
            return true;
        s.insert(root->val);
        return dfs(root->left, k, s) || dfs(root->right, k, s);
    }

public:
    bool findTarget(TreeNode *root, int k)
    {
        unordered_set<int> s;
        return dfs(root, k, s);
    }
};