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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>>ans;
        if(root==NULL)return ans;
       queue<TreeNode*>q;
       q.push(root);
       bool reverse=true;

       while(!q.empty()){
           int size=q.size();
            vector<int>arr(size);
           for(int i=0;i<size;i++){
               TreeNode*temp=q.front();
               q.pop();
              int index=reverse?i:size-1-i;
              arr[index]=temp->val;
              if(temp->left){
                  q.push(temp->left);
              }
               if(temp->right){
                  q.push(temp->right);
              }
           }
           reverse=!reverse;
           ans.push_back(arr);
       }  
       return ans;
    }
};