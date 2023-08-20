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
    vector<vector<int>> ans;
    vector<int> v;
public:
void solve(TreeNode* root,vector<int> v,int tar)
{
    if(!root){
        return;
    }
    if(root!=nullptr)
    {
        v.push_back(root->val);
    }
    if(root->left==nullptr && root->right==nullptr)
    {
        if(accumulate(v.begin(), v.end(), 0) == tar)
        ans.push_back(v);
        return;
    }
    if(root->left)
    {
        solve(root->left,v,tar);
    }
    if(root->right)
    {
        solve(root->right,v,tar);
    }
}

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        solve(root,v,targetSum);
        return ans;
    }
};