def kadane(array):
  best = array[0]
  dp = [0] * len(array)
  for i, _ in enumerate(array):
    dp[i] = array[i]
    if i-1 >= 0:
      dp[i] = max(dp[i], dp[i-1] + array[i])
    best = max(best, dp[i])
  return best

rows, cols = [int(x) for x in input().split()]
a = []
for _ in range(rows):
  a.append([int(x) for x in input().split()])

answer = a[0][0]
for r0 in range(rows):
  compressed = [0] * cols
  for r1 in range(r0, rows):
    for c in range(cols):
      compressed[c] += a[r1][c]
    answer = max(answer, kadane(compressed))

print(answer)