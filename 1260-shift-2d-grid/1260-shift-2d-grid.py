class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        a = []
        m = len(grid[0])
        for l in grid:
            a.extend(l)
        n = len(a)
        k = k % n

        if k == 0:
            return grid

        a = a[n - k :] + a[: n - k]
        print(a)
        res = []
        for i in range(0, n, m):
            res.append(a[i : i + m])

        return res
