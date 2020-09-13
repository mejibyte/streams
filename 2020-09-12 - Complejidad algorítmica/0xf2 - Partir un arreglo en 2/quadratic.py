def solve(a):
  n = len(a)
  for i in range(n):
    left = sum(a[0:i])
    right = sum(a[i:n])
    if left > 0 and right < 0:
      print(i)
      return
  print("Impossible")

if __name__ == "__main__":
  n = int(input())
  a = [int(x) for x in input().split()]
  solve(a)