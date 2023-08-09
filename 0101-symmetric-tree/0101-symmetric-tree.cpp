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
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)
            return true;
        else
        {
            return solve(root->left,root->right);
        }
    }
    bool solve(TreeNode* root1,TreeNode* root2)
    {
        if(root1==nullptr && root2==nullptr)
        {
            return true;
        }
        else if( root1==nullptr || root2==nullptr || root1->val != root2->val)
        {
            return false;
        }
        else 
        {
            return solve(root1->left,root2->right) && solve(root1->right,root2->left);
        }
    }
};