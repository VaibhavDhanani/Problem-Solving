class Solution:

    def dfs(self, image, i, j, m, n, visited, color, c):

        if i < 0 or i >= m or j < 0 or j >= n:
            return

        if (i, j) in visited:
            return

        if image[i][j] != c:
            return

        visited.add((i, j))
        image[i][j] = color

        self.dfs(image, i+1, j, m, n, visited, color, c)
        self.dfs(image, i, j+1, m, n, visited, color, c)
        self.dfs(image, i-1, j, m, n, visited, color, c)
        self.dfs(image, i, j-1, m, n, visited, color, c)

    def floodFill(self, image, sr, sc, color):

        c = image[sr][sc]

        if c == color:
            return image

        visited = set()
        m = len(image)
        n = len(image[0])

        self.dfs(image, sr, sc, m, n, visited, color, c)

        return image