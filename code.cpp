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
    void inorder(TreeNode *root,int &summ)
    {
        if(root)
        {
            inorder(root->right,summ);
            summ=root->val=root->val+summ;
            inorder(root->left,summ);
        }
    }
    TreeNode* convertBST(TreeNode* root) {
        
        int summ=0;
        inorder(root,summ);
        return root;
    }
};
