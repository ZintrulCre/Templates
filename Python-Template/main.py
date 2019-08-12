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

# nums = ["ba", "bca", "bda", "a", "b", "bdca"]
# array = [2, 7, 4, 1, 8, 1]
# matrix = [[2, 5], [8, 4], [0, -1]]
#
# sol = Solution()
# s = sol.sufficientSubset(a,22)
# print(s)

n = int(input())
year = [int(x) for x in input().split(' ')]
res = [0 for x in range(n)]
bot = []
if n > 1:
    if year[1] >= year[0]:
        bot.append(0)
        res[0] = 1
    if year[-2] >= year[-1]:
        bot.append(n - 1)
        res[-1] = 1
for i in range(1, len(year) - 1):
    if year[i + 1] >= year[i] and year[i - 1] >= year[i]:
        bot.append(i)
        res[i] = 1
for i in bot:
    for j in range(i - 1, -1, -1):
        if year[j] < year[j + 1]:
            break
        elif year[j] == year[j + 1]:
            res[j] = max(res[j], res[j + 1])
        else:
            res[j] = max(res[j], res[j + 1] + 1)
    for j in range(i + 1, n):
        if year[j] < year[j - 1]:
            break
        elif year[j] == year[j - 1]:
            res[j] = max(res[j], res[j - 1])
        else:
            res[j] = max(res[j], res[j - 1] + 1)
print(sum(res) * 100)
