class Solution:
    def maxIncreaseKeepingSkyline(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        row = [max(grid[i]) for i in len(grid)]
        col = [max(grid[0][j]) for j in len(grid[0])]