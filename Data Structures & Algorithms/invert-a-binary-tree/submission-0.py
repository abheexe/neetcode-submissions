class Solution:
    def invertTree(self, root: Optional[Treeroot]) -> Optional[Treeroot]:
        if(not root):
            return None
        
        root.left, root.right = root.right, root.left
        self.invertTree(root.left)
        self.invertTree(root.right)
        return root