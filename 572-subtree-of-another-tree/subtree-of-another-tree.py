# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isSameTree(self, p, q):
        if p is None and q is None:
            return True

        if p is None or q is None:
            return False

        return (p.val==q.val) and (self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right))


    def isSubtree(self, root, subRoot):
        if root is None:
            return False

        if self.isSameTree(root, subRoot):
            return True

        return (self.isSubtree(root.left,subRoot) or self.isSubtree(root.right,subRoot))

        