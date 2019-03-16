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

# nums = ["b==b", "b==e", "e==c", "d!=e"]
# array = [1,1,1,2,2,3]
# matrix = [[0, 2], [1, 3], [2, 4], [3, 5], [4, 6]]
#
# sol = Solution()
# s = sol.topKFrequent(array,2)
# print(s)


n = int(input())
for j in range(n):
    m = int(input())
    awards = input()
    awards = awards.split(' ')
    awards.append(awards[0])
    awards.insert(0, awards[-2])
    res1 = [1 for _ in range(m)]
    res2 = [1 for _ in range(m)]
    for i in range(1, m):
        if awards[i] > awards[i - 1]:
            res1[i] = res1[i - 1] + 1
    for i in range(m - 2, -1, -1):
        if awards[i] > awards[i + 1]:
            res2[i] = res2[i + 1] + 1
    print(sum([max(x, y) for x, y in zip(res1, res2)]))

