def solve():
  n = int(input())
  a = [int(x) for x in input().split()]

  left = 0
  total = sum(a)

  for p in range(n): # O(n)
    right = total - left
    if left > 0 and right < 0: # O(1)
      print(p) # O(1)
      return   # O(1)

    left += a[p]

  print("Impossible")

if __name__ == "__main__":
  solve()