class Solution(object):

    def isValidBST(self, root):
        return self.isValid(root, float('-inf'), float('inf'))

    def isValid(self, root, min_val, max_val):
        if root is None:
            return True
        
        if root.val <= min_val or root.val >= max_val:
            return False
        
        return (self.isValid(root.left, min_val, root.val) and
                self.isValid(root.right, root.val, max_val))