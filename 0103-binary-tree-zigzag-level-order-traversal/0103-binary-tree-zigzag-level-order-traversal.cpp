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
        vector<vector<int>> answer;
        if (root == nullptr) return answer;
        stack <TreeNode*> s1, s2;
        s1.push(root);
        while (!s1.empty() || !s2.empty()) {
            vector <int> v;
            while (!s1.empty()) {
                TreeNode* temp = s1.top();
                v.push_back(temp->val);
                if (temp->left) s2.push(temp->left);
                if (temp->right) s2.push(temp->right);
                s1.pop();
            }
            if(v.size()!=0)
            {
                answer.push_back(v);
                v.clear();
            }
           
            while (!s2.empty()) {
                TreeNode* temp2 = s2.top(); 
                v.push_back(temp2->val);
                if (temp2->right) s1.push(temp2->right);
                if (temp2->left) s1.push(temp2->left);
                s2.pop();
            }
            if(v.size()!=0)
            {
                answer.push_back(v);
                v.clear();
            }
        }
        return answer;
    }
};