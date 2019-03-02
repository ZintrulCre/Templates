from Solution import *
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
array = [73, 74, 75, 71, 69, 72, 76, 73]
matrix = [[0,2],[1,3],[2,4],[3,5],[4,6]]
sol = Solution()
s = sol.eraseOverlapIntervals(matrix)
print(s)
