# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def sumRootToLeaf(self, root: Optional[TreeNode]) -> int:
        total_sum = 0

        def dfs(node, binary):
            nonlocal total_sum
            
            if not node:
                return
            
            binary += str(node.val)
            if not node.left and not node.right:
                total_sum += int(binary, 2)
                return

            dfs(node.left, binary)
            dfs(node.right, binary)

        dfs(root, "")
        return total_sum

        