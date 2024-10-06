# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Codec:

    def serialize(self, root):
        s=[]

        def dfs(node):
            if not node:
                s.append("L")
                return
            s.append(str(node.val))
            dfs(node.left)
            dfs(node.right)
        dfs(root)
        return "t".join(s)

    def deserialize(self, data):
        v=data.split("t")
        self.i=0

        def dfs():
            if v[self.i]=="L":
                self.i+=1
                return None
            node=TreeNode(int(v[self.i]))
            self.i+=1
            node.left=dfs()
            node.right=dfs()
            return node
        return dfs()
        

# Your Codec object will be instantiated and called as such:
# ser = Codec()
# deser = Codec()
# ans = deser.deserialize(ser.serialize(root))