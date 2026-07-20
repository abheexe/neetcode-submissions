# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        st = [(root, 1)]
        maxD = 0

        while st:
            node, currD = st.pop()
            maxD = max(currD, maxD)

            if(node.right):
                st.append((node.right, currD + 1))
            if(node.left):
                st.append((node.left, currD + 1))
                
        return maxD