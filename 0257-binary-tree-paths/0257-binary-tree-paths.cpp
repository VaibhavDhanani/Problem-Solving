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
    vector <string> ans;
public:
void solve(TreeNode* root,string s)
{
    if(!root){
        return;
    }
    if(root!=nullptr)
    {
        if(s=="")
        s+=to_string(root->val);
        else
        s+="->" + to_string(root->val);
    }
    if(root->left==nullptr && root->right==nullptr)
    {
        ans.push_back(s);
        return;
    }
    if(root->left)
    {
        solve(root->left,s);
    }
    if(root->right)
    {
        solve(root->right,s);
    }
}

    vector<string> binaryTreePaths(TreeNode* root) {
       solve(root,"");
       return ans;
    }
};