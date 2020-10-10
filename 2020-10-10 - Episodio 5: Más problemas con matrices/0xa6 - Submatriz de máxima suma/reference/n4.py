

rows, cols = [int(x) for x in input().split()]
a = []
s = []
for _ in range(rows):
  a.append([int(x) for x in input().split()])
  s.append([0] * cols)

for r in range(rows):
  for c in range(cols):
    s[r][c] += a[r][c]
    if r-1 >= 0:
      s[r][c] += s[r-1][c]
    if c-1 >= 0:
      s[r][c] += s[r][c-1]
    if r-1 >= 0 and c-1 >= 0:
      s[r][c] -= s[r-1][c-1]

answer = a[0][0]
for r0 in range(rows):
  for c0 in range(cols):
    for r1 in range(r0, rows):
      for c1 in range(c0, cols):
        option = s[r1][c1]
        if r0-1 >= 0:
          option -= s[r0-1][c1]
        if c0-1 >= 0:
          option -= s[r1][c0-1]
        if r0-1 >= 0 and c0-1 >= 0:
          option += s[r0-1][c0-1]
        answer = max(answer, option)

print(answer)