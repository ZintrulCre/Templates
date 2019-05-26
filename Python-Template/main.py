from Solution import *
from DataStructure import *

# a = TreeNode(1)
# b = TreeNode(2)
# c = TreeNode(3)
# d = TreeNode(4)
# e = TreeNode(5)
# f = TreeNode(6)
# g = TreeNode(7)
# a.left = b
# a.right = c
# b.left = d

a = ListNode(1)
b = ListNode(2)
c = ListNode(3)
d = ListNode(4)
e = ListNode(5)
f = ListNode(6)
g = ListNode(7)
h = ListNode(8)
i = ListNode(9)
j = ListNode(10)
a.next = b
b.next = c
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
array =[2,7,4,1,8,1]
matrix = [[2, 5], [8, 4], [0, -1]]

sol = Solution()
s = sol.prevPermOpt1([3,1,1,3])
print(s)
