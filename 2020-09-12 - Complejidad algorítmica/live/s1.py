def solve():
  n = int(input())
  a = [int(x) for x in input().split()]

  # O(n^2)
  for p in range(n): # O(n)
    left = sum(a[0:p]) # sumar a[0] a a[p-1]  # O(n)
    right = sum(a[p:n]) # sumar a[p] a a[n-1] # O(n)
    if left > 0 and right < 0: # O(1)
      print(p) # O(1)
      return   # O(1)
  print("Impossible")

if __name__ == "__main__":
  solve()