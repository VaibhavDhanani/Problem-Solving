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
    string ans1,ans2;
    void solve1(TreeNode* root)
    {
        if(root!=nullptr)
        {
            solve1(root->left);
            ans1+=to_string(root->val);
            solve1(root->right);
        }
        ans1+='#';
    }
    void solve2(TreeNode* root)
    {
        if(root!=nullptr)
        {
            solve2(root->left);
            ans2+=to_string(root->val);
            solve2(root->right);
        }
        ans2+='#';
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        solve1(p);
        solve2(q); 
        if(ans1==ans2)
        return true;
        return false;
    }
};