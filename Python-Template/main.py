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

a = ListNode(7)
b = ListNode(2)
c = ListNode(4)
d = ListNode(3)
e = ListNode(5)
f = ListNode(6)
g = ListNode(4)
a.next = b
b.next = c
c.next = d
# d.next = e
e.next = f
f.next = g

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

nums = ["b==b", "b==e", "e==c", "d!=e"]
array = [1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1,
         0, 1, 1]
matrix = [[0, 2], [1, 3], [2, 4], [3, 5], [4, 6]]

sol = Solution()
s = sol.addTwoNumbers(a,e)
print(s)
