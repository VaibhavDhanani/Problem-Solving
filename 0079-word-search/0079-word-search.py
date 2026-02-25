class Solution:
    def exist(self, board, word):

        m, n = len(board), len(board[0])
        dirs = [(0,1),(1,0),(0,-1),(-1,0)]

        def dfs(r, c, k, visited):
            if k == len(word):
                return True
            
            if not (0 <= r < m and 0 <= c < n):
                return False
            
            if (r,c) in visited or board[r][c] != word[k]:
                return False
            
            visited.add((r,c))

            for dr, dc in dirs:
                if dfs(r+dr, c+dc, k+1, visited):
                    return True

            visited.remove((r,c))
            return False

        for i in range(m):
            for j in range(n):
                if dfs(i, j, 0, set()):
                    return True
        
        return False