# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def kthSmallest(self, root, k):
        stack = []
        current = root

        while True:
            while current:
                stack.append(current)
                current = current.left
            
            current = stack.pop()
            k -= 1
        
            if k == 0:
                return current.val
            current = current.right