import Solution
from DataStructure import *


a = TreeLinkNode(1)
b = TreeLinkNode(2)
c = TreeLinkNode(3)
# d = TreeLinkNode(4)
# e = TreeLinkNode(5)
# f = TreeLinkNode(6)
# g = TreeLinkNode(7)
a.left = b
a.right = c
# b.left = d
# b.right = e
# c.left = f
# c.right = g

nums = [-3, -2, -1, 0, 0, 1, 2, 3]
sol = Solution.Solution()
s = sol.connect(a)
print(s)