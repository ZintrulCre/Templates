from Solution import *
from DataStructure import *


a = TreeNode(5)
b = TreeNode(4)
c = TreeNode(8)
d = TreeNode(11)
e = TreeNode(17)
f = TreeNode(4)
g = TreeNode(7)
h = TreeNode(1)
i = TreeNode(5)
j = TreeNode(3)
a.left = b
a.right = c
b.left = d
c.left = e
c.right = f
d.left = g
d.right = h
f.left = i
f.right = j

# a = ListNode(1)
# b = ListNode(2)
# c = ListNode(3)
# d = ListNode(4)
# e = ListNode(5)
# f = ListNode(6)
# g = ListNode(7)
# h = ListNode(8)
# i = ListNode(9)
# j = ListNode(10)
# a.next = b
# b.next = c
# c.next = d
# d.next = e
# e.next = f
# f.next = g
# g.next = h
# h.next = i
# i.next = j

# a = TreeLinkNode(1)
# b = TreeLinkNode(2)
# c = TreeLinkNode(3)
# d = TreeLinkNode(4)
# e = TreeLinkNode(5)
# f = TreeLinkNode(6)
# g = TreeLinkNode(7)
# b.left = a
# b.right = c
# b.left = d
# b.right = e
# c.left = f
# c.right = g

nums = ["ba", "bca", "bda", "a", "b", "bdca"]
array = [2, 7, 4, 1, 8, 1]
matrix = [[2, 5], [8, 4], [0, -1]]

sol = Solution()
s = sol.sufficientSubset(a,22)
print(s)
