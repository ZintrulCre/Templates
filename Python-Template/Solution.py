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
    def canPartitionKSubsets(self, nums: List[int], k: int) -> bool:
        total = sum(nums)
        if total % k != 0 or max(nums) > total // k:
            return False

        def BackTracking(sum, k, curr, nums, visited):
            if k == 0:
                return True
            if curr == 0:
                return BackTracking(sum, k - 1, sum, nums, visited)
            for i in range(len(nums)):
                if not visited[i] and curr - nums[i] >= 0:
                    visited[i] = True
                    if BackTracking(sum, k, curr - nums[i], nums, visited):
                        return True
                    visited[i] = False
            return False

        visited = [False for _ in range(len(nums))]
        return BackTracking(sum / k, )
