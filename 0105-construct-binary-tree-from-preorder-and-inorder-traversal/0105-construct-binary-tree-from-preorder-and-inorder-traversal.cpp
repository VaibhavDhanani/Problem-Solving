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
int i=0;
    TreeNode* solve(vector<int> &preorder,vector<int>& inorder,int start,int end)
    {
        if(start > end)
            return nullptr;
        TreeNode * root=new TreeNode(preorder[i++]);
        int j=0;
        for(int k=start;k<=end;k++)
        {
            if(inorder[k]==root->val)
            {
                j=k;
                break;
            }
        }
        root->left=solve(preorder,inorder,start,j-1);
        root->right=solve(preorder,inorder,j+1,end);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int s=0,e=inorder.size()-1;
        return solve(preorder,inorder,s,e);
    }
};