def solve(a):
  n = len(a)
  total = sum(a)

  left = 0
  for i in range(n):
    right = total - left
    if left > 0 and right < 0:
      print(i)
      return
    left += a[i]

  print("Impossible")

if __name__ == "__main__":
  n = int(input())
  a = [int(x) for x in input().split()]
  solve(a)