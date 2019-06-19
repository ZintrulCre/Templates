import sys
import math
import string
import heapq
import random
import collections
from typing import List
from DataStructure import *
from queue import PriorityQueue


class Solution:
    def shortestPathBinaryMatrix(self, grid: List[List[int]]) -> int:
        dir = [[-1, -1], [-1, 0], [-1, 1], [0, -1], [0, 1], [1, -1], [1, 0], [1, 1]]
        n = len(grid)
        if grid[0][0] or grid[n - 1][n - 1]:
            return -1
        visited = [[False for _ in range(n)] for _ in range(n)]
        visited[0][0] = True
        queue = [[0, 0, 1]]
        while queue:
            q = queue[0]
            queue = queue[1:]
            for i in range(8):
                x, y = q[0] + dir[i][0], q[1] + dir[i][1]
                if x == y == n - 1:
                    return q[2] + 1
                if x >= 0 and x < n and y >= 0 and y < n and not visited[x][y] and not grid[x][y]:
                    queue.append([x, y, q[2] + 1])
                    visited[x][y] = True
        return -1
