H, W = map(int, input().split())
A = [[0]*W]*H
result = 0
m = 101
for h in range(H):
  A[h] = list(map(int, input().split()))
  if min(A[h]) < m:
    m = min(A[h])
for h in range(H):
  for w in range(W): 
    result += (A[h][w] - m)
print(result)