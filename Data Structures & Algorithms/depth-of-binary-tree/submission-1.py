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
        
        q = deque([root])
        level = 0
        while q:
            for i in range(len(q)): 
        #it will iterate over only current number of items it has (curr is 1 as it only has root).
        #once we start processing the root, we will add its childern to the queue too and that 
        #should'nt be iterated on rn in this level thus this snapshot helps
                node = q.popleft()
                if(node.left): 
                    q.append(node.left)
                if(node.right):
                    q.append(node.right)
            level += 1
        return level