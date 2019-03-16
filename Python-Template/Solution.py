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
    def findKthLargest(self, nums: List[int], k: int) -> int:
        min_heap = []
        for m in nums:
            if len(min_heap) < k or min_heap[0] < m:
                heapq.heappush(min_heap, m)
            if len(min_heap) > k:
                heapq.heappop()
        return min_heap[0]