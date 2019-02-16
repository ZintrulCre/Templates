import Solution
from DataStructure import *

a = TreeLinkNode(1)
b = TreeLinkNode(2)
c = TreeLinkNode(3)
# d = TreeLinkNode(4)
# e = TreeLinkNode(5)
# f = TreeLinkNode(6)
# g = TreeLinkNode(7)
b.left = a
b.right = c
# b.left = d
# b.right = e
# c.left = f
# c.right = g

nums = ["b==b", "b==e", "e==c", "d!=e"]
sol = Solution.Solution()
s = sol.isValidBST(a)
print(s)
