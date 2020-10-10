def solve(matrix):
  want = sum(matrix[0])
  for row in matrix:
    if sum(row) != want:
      return False

  for c in range(n):
    col = [matrix[r][c] for r in range(n)]
    if sum(col) != want:
      return False

  diagonal1 = [matrix[i][i] for i in range(n)]
  diagonal2 = [matrix[i][n-1-i] for i in range(n)]
  if sum(diagonal1) != want or sum(diagonal2) != want:
    return False

  return True

if __name__ == "__main__":
  n = int(input())
  matrix = []
  for _ in range(n): # O(n^2)
    matrix.append([int(x) for x in input().split()])

  if solve(matrix):
    print("Yes")
  else:
    print("No")