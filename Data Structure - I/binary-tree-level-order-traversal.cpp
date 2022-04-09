// Returns binary tree level order traversal using BFS
// https://leetcode.com/problems/binary-tree-level-order-traversal/

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        if (root == NULL)
            return {};
        vector<vector<int>> v;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int len = q.size();
            vector<int> currLevel;
            for (int i = 0; i < len; i++)
            {
                auto top = q.front();
                if (top->left)
                    q.push(top->left);
                if (top->right)
                    q.push(top->right);
                q.pop();
                currLevel.push_back(top->val);
            }
            v.push_back(currLevel);
        }
        return v;
    }
};