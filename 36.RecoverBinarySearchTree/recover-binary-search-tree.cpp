// Returns the BST after recovering its nodes
// https://leetcode.com/problems/recover-binary-search-tree/

class Solution {
    TreeNode* first;
    TreeNode* second;
    TreeNode* mid;
    TreeNode* prev;
public:
    void recoverTree(TreeNode* root) {
        if(root==NULL) return;
        first, second, mid = NULL;
        prev = new TreeNode(INT_MIN);
        inOrder(root);
        if(first && second) swap(first->val,second->val);
        else if(first && mid) swap(first->val,mid->val);

    }
    void inOrder(TreeNode* root){
        if(root==NULL) return;
        inOrder(root->left);
        if(prev!=NULL && root->val<prev->val){
            if(first==NULL){
                first=prev;
                mid=root;
            }else second=root;
        }
        prev = root;
        inOrder(root->right);
    }
};