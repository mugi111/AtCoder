N = int(input())
res = 0 
for i in range(1, N+1):
  inSev = '7' in str(i) or '7' in str(oct(i))
  if inSev:
    res += 1
print(N - res)