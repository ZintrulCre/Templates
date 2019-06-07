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
    def numSubmatrixSumTarget(self, matrix: List[List[int]], target: int) -> int:
        m = len(matrix)
        if m == 0:
            return 0
        n, res = len(matrix[0]), 0
        for i in range(m):
            for j in range(1, n):
                matrix[i][j] += matrix[i][j - 1]
        for j in range(n):
            for y in range(j, n):
                for i in range(m):
                    val = 0
                    for x in range(i, m):
                        val += matrix[x][y] - (0 if j == 0 else matrix[x][j - 1])
                        res += (val == target)
        return res
