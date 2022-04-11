// Returns if the BST is valid or not
// https://leetcode.com/problems/validate-binary-search-tree/

class Solution
{
public:
    void inOrder(TreeNode *root, vector<int> &t)
    {
        if (root == NULL)
            return;
        inOrder(root->left, t);
        t.push_back(root->val);
        inOrder(root->right, t);
    }
    //     bool validateBST(TreeNode* root, TreeNode* max, TreeNode* min){
    //         if(root==NULL) return true;
    //         if(max && root->val>=max->val) return false;
    //         if(min && root->val <=min->val) return false;
    //         return validateBST(root->left,root,min) && validateBST(root->right,max,root);

    //     }
public:
    bool isValidBST(TreeNode *root)
    {
        // return validateBST(root,NULL,NULL);
        vector<int> t;
        if (root == NULL)
            return true;
        inOrder(root, t);
        for (int i = 1; i < t.size(); i++)
        {
            if (t[i - 1] >= t[i])
                return false;
        }
        return true;
    }
};