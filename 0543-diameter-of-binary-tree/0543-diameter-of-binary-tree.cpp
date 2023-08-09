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
    int height(TreeNode* root) {
    if (root == nullptr)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    return 1 + max(left, right);
}

int diameterOfBinaryTree(TreeNode* root) {
    if (root == nullptr)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    int left_dia = diameterOfBinaryTree(root->left);
    int right_dia = diameterOfBinaryTree(root->right);

    return max({left + right, left_dia, right_dia});
}
};