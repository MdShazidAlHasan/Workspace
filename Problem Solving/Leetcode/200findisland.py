from collections import deque
def numIslands(grid):
    if not grid:
        return 0
    
    rows, cols= len(grid), len(grid[0])
    res = 0
    seen = set()
    
    def bfs(r, c):
        q = deque()
        seen.add((r, c))
        q.append((r, c))
        directions = [[1,0], [-1, 0], [0, 1], [0, -1]]
        
        while q:
            row, col = q.popleft()
            for dr, dc in directions:
                r, c = row + dr,  col+ dc
                if r in range(rows) and \
                    c in range(cols) and \
                    grid[r][c] == "1" and \
                    (r, c) not in seen:
                        q.append((r, c))
                        seen.add((r, c))
    
    for r in range(rows):
        for c  in range(cols):
            if grid[r][c] == "1":
                res =+ 1
                bfs(r, c)
    print(seen)
    return res

grid = [["1","1","0","0","0"],
        ["1","1","0","0","0"],
        ["0","0","1","0","0"],
        ["0","0","0","1","1"]]
print(numIslands(grid))